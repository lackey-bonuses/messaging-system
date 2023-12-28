#include "user.h"
#include "message.h"

int main() {
    // Create users
    struct User user1, user2;
    initializeUser(&user1, "Alice", 1);
    initializeUser(&user2, "Bob", 2);

    // Create and display user information
    printf("User 1 Information:\n");
    displayUserInfo(&user1);

    printf("\nUser 2 Information:\n");
    displayUserInfo(&user2);

    // Create and display messages
    struct Message message1, message2;
    initializeMessage(&message1, &user1, &user2, "Hello Bob, how are you?");
    initializeMessage(&message2, &user2, &user1, "Hi Alice, I'm good. How about you?");

    printf("\nMessage 1 Information:\n");
    displayMessageInfo(&message1);

    printf("\nMessage 2 Information:\n");
    displayMessageInfo(&message2);

    return 0;
}
