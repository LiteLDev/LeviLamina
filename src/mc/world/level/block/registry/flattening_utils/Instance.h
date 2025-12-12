#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/util/BaseGameVersion.h"
#include "mc/world/item/registry/ItemRegistryComplexAlias.h"

// auto generated forward declare list
// clang-format off
class Block;
namespace FlatteningUtils { struct LegacyBlockInfo; }
// clang-format on

namespace FlatteningUtils {

struct Instance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::FlatteningUtils::LegacyBlockInfo const&> info;
    ::ll::TypedStorage<8, 64, ::std::function<::Block const*(int)>>     blockComplexAliasCallback;
    ::ll::TypedStorage<8, 96, ::ItemRegistryComplexAlias>               itemComplexAliasCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                  registerAlteredStatesCallback;
    ::ll::TypedStorage<8, 32, ::BaseGameVersion>                        baseGameVersion;
    ::ll::TypedStorage<8, 24, ::SemVersion>                             blockJsonFormatVersion;
    // NOLINTEND

public:
    // prevent constructor by default
    Instance& operator=(Instance const&);
    Instance(Instance const&);
    Instance();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~Instance();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace FlatteningUtils
