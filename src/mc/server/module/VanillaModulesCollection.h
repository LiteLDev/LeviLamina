#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/server/module/IECSModulesCollection.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
class IMinecraftEventing;
namespace VanillaSystemsRegistration { struct RegistrationOptions; }
// clang-format on

class VanillaModulesCollection : public ::IECSModulesCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk6b23ff;
    ::ll::UntypedStorage<8, 8>  mUnk2a9c01;
    ::ll::UntypedStorage<8, 8>  mUnk7008f3;
    ::ll::UntypedStorage<8, 24> mUnk7202ee;
    // NOLINTEND

public:
    // prevent constructor by default
    VanillaModulesCollection& operator=(VanillaModulesCollection const&);
    VanillaModulesCollection(VanillaModulesCollection const&);
    VanillaModulesCollection();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual void init(
        ::WeakRef<::EntityRegistry>,
        ::VanillaSystemsRegistration::RegistrationOptions&,
        ::Bedrock::NonOwnerPointer<::IMinecraftEventing>
    ) /*override*/;
#else // LL_PLAT_C
    virtual void init(
        ::WeakRef<::EntityRegistry>                        registry,
        ::VanillaSystemsRegistration::RegistrationOptions& options,
        ::Bedrock::NonOwnerPointer<::IMinecraftEventing>   eventing
    ) /*override*/;
#endif

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $init(
        ::WeakRef<::EntityRegistry>                        registry,
        ::VanillaSystemsRegistration::RegistrationOptions& options,
        ::Bedrock::NonOwnerPointer<::IMinecraftEventing>   eventing
    );
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
