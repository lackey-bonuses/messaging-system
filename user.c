#include "user.h"
#include <stdio.h>

void initializeUser(struct User *user, const char *username, int userId) {
    snprintf(user->username, sizeof(user->username), "%s", username);
    user->userId = userId;
}

void displayUserInfo(const struct User *user) {
    printf("User ID: %d\nUsername: %s\n", user->userId, user->username);
}
