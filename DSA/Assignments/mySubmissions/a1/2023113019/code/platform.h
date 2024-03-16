#include "post.h"
#include <stdbool.h>
#include <string.h>


#ifndef __PLATFORM_H__
#define __PLATFORM_H__

typedef struct Platform{
    Post * Posts;
    Post * lastViewedPost;
}Platform;

Platform * createPlatform();
bool addPost(char * username, char * caption);
bool deletePost(int n);
Post * viewPost(int n);
Post * currPost();
Post * nextPost();
Post * previousPost();
bool addComment(char * username, char * content);
bool deleteComment(int n);
Comment * viewComments();
bool addReply(char * username, char * content, int n);
bool deleteReply(int n, int m);

#endif