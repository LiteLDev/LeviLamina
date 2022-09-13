#include <HookAPI.h>

#include <third-party/ModUtils/ModUtils.h>

LIAPI uintptr_t LL::Hook::findSig(const char* szSignature) {
    return ModUtils::FindSig(szSignature);
}
