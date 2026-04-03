#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/CustomBiomeManagerProvider.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class ICustomBiomeSource;
struct CustomBiomeSourceConfig;
namespace mce { class UUID; }
// clang-format on

namespace Editor {

class CustomBiomeManager : public ::Editor::CustomBiomeManagerProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk8b35d2;
    // NOLINTEND

public:
    // prevent constructor by default
    CustomBiomeManager& operator=(CustomBiomeManager const&);
    CustomBiomeManager(CustomBiomeManager const&);
    CustomBiomeManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CustomBiomeManager() /*override*/ = default;

    virtual ::WeakRef<::ICustomBiomeSource> buildCustomSource(::CustomBiomeSourceConfig const& config) /*override*/;

    virtual bool destroyCustomSource(::mce::UUID id) /*override*/;

    virtual ::WeakRef<::ICustomBiomeSource> getCustomSource(::mce::UUID const& id) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::WeakRef<::ICustomBiomeSource> $buildCustomSource(::CustomBiomeSourceConfig const& config);

    MCNAPI bool $destroyCustomSource(::mce::UUID id);

    MCNAPI ::WeakRef<::ICustomBiomeSource> $getCustomSource(::mce::UUID const& id);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor
