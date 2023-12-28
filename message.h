#ifndef MESSAGE_H
#define MESSAGE_H

#include "user.h"

struct Message {
    struct User sender;
    struct User receiver;
    char content[255];
};

void initializeMessage(struct Message *message, const struct User *sender, const struct User *receiver, const char *content);
void displayMessageInfo(const struct Message *message);

#endif // MESSAGE_H
