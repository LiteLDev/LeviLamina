#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class IResourcePackRepository;
class ResourcePackStack;
namespace mce { class UUID; }
// clang-format on

class BaseGamePackSlices {
public:
    // BaseGamePackSlices inner types declare
    // clang-format off
    struct BaseGameVersionPack;
    // clang-format on

    // BaseGamePackSlices inner types define
    struct BaseGameVersionPack {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 120> mUnk745cd0;
        ::ll::UntypedStorage<8, 8>   mUnk5b766c;
        // NOLINTEND

    public:
        // prevent constructor by default
        BaseGameVersionPack& operator=(BaseGameVersionPack const&);
        BaseGameVersionPack(BaseGameVersionPack const&);
        BaseGameVersionPack();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~BaseGameVersionPack();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk3fcc2d;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseGamePackSlices& operator=(BaseGamePackSlices const&);
    BaseGamePackSlices(BaseGamePackSlices const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BaseGamePackSlices();

    MCAPI void addFromVersions(
        ::std::vector<::BaseGameVersion> const&                               baseGameVersions,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository const> const& resourcePackRepository,
        ::mce::UUID const&                                                    packId
    );

    MCAPI void applyPackSlices(
        ::BaseGameVersion const&                                              baseGameVersion,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository const> const& resourcePackRepository,
        ::ResourcePackStack&                                                  packStack
    ) const;

    MCAPI ~BaseGamePackSlices();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
