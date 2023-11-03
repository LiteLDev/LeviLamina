#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/SerializerContext.h"
#include "mc/deps/cereal/internal/ResultCode.h"
#include "mc/deps/puv/CerealUpgraderBase.h"
#include "mc/deps/puv/Logger.h"

// auto generated forward declare list
// clang-format off
namespace Puv { class LoadResultAny; }
namespace Puv { class ParserBase; }
namespace Puv { class Upgrader; }
namespace Puv { struct Logger; }
namespace Puv::internal { struct PathElement; }
namespace Puv::v1_20_50::BlockDescriptor { struct Compound; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Puv {
// NOLINTBEGIN
// symbol: ?pickFormatVersion@Puv@@YA?AVSemVersion@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI class SemVersion pickFormatVersion(std::string const&);
// NOLINTEND

}; // namespace Puv
