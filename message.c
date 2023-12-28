#include "message.h"
#include <stdio.h>

void initializeMessage(struct Message *message, const struct User *sender, const struct User *receiver, const char *content) {
    message->sender = *sender;
    message->receiver = *receiver;
    snprintf(message->content, sizeof(message->content), "%s", content);
}

void displayMessageInfo(const struct Message *message) {
    printf("Sender Information:\n");
    displayUserInfo(&message->sender);

    printf("\nReceiver Information:\n");
    displayUserInfo(&message->receiver);

    printf("\nMessage Content: %s\n", message->content);
}
