#include "llapi/HookAPI.h"

#include "llapi/utils/ModUtils.h"

LIAPI uintptr_t ll::hook::findSig(const char* szSignature) {
    return ModUtils::FindSig(szSignature);
}
