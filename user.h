#ifndef USER_H
#define USER_H

struct User {
    char username[50];
    int userId;
};

void initializeUser(struct User *user, const char *username, int userId);
void displayUserInfo(const struct User *user);

#endif // USER_H
