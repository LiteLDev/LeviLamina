#include "ll/api/memory/Memory.h"

#include <execution>
#include <optional>
#include <vector>

#include "pl/SymbolProvider.h"

#include "ll/api/io/Logger.h"
#include "ll/api/service/GamingStatus.h"
#include "ll/api/thread/GlobalThreadPauser.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/api/utils/SystemUtils.h"
#include "ll/core/LeviLamina.h"

#include "mc/deps/core/common/bedrock/IMemoryAllocator.h"

#include "demangler/Demangle.h"

namespace ll::memory {
LLNDAPI FuncPtr resolveSignature(std::string_view signature, std::span<std::byte> range) {
    if (range.empty() || signature.empty()) {
        return nullptr;
    }
    return Signature::parse(signature).view().resolve(range);
}
LLNDAPI FuncPtr resolveSignature(std::string_view signature) {
    return resolveSignature(signature, sys_utils::getImageRange());
}
} // namespace ll::memory
