#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockVolumeBase;
class CompoundBlockVolume;
namespace Editor::BlockUtils { class CommonBlockUtilityServiceProvider; }
// clang-format on

namespace Editor::BlockUtils {

class ServerBlockUtilityServiceProvider {
public:
    // prevent constructor by default
    ServerBlockUtilityServiceProvider& operator=(ServerBlockUtilityServiceProvider const&);
    ServerBlockUtilityServiceProvider(ServerBlockUtilityServiceProvider const&);
    ServerBlockUtilityServiceProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerBlockUtilityServiceProvider();

    // vIndex: 1
    virtual ::Editor::BlockUtils::CommonBlockUtilityServiceProvider& getCommonInterface() = 0;

    // vIndex: 2
    virtual void fillVolume(
        ::std::variant<::BlockVolumeBase const*, ::CompoundBlockVolume const*> const,
        ::std::optional<::Block const*> const
    ) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::BlockUtils
