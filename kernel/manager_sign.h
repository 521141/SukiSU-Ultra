#ifndef MANAGER_SIGN_H
#define MANAGER_SIGN_H

// ShirkNeko/SukiSU
#define EXPECTED_SIZE_SHIRKNEKO 0x35c
#define EXPECTED_HASH_SHIRKNEKO                                                \
    "947ae944f3de4ed4c21a7e4f7953ecf351bfa2b36239da37a34111ad29993eef"

// XUEBA
#define EXPECTED_SIZE_XUEBA 0x17f
#define EXPECTED_HASH_XUEBA                                                    \
    "3f271d166479fad0b786952d0e366d1cfd9edff9d58951c7cc15dd4e342de0f9"

typedef struct {
    u32 size;
    const char *sha256;
} apk_sign_key_t;

#endif /* MANAGER_SIGN_H */
