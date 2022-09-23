#include "llapi/HookAPI.h"

#include <ModUtils/ModUtils.h>

LIAPI uintptr_t ll::hook::findSig(const char* szSignature) {
    return ModUtils::FindSig(szSignature);
}
