#include <HookAPI.h>

#include <third-party/ModUtils/ModUtils.h>

LIAPI uintptr_t ll::hook::FindSig(const char* szSignature) {
    return ModUtils::FindSig(szSignature);
}
