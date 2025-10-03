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
    ::ll::UntypedStorage<8, 8>  mUnk6b9567;
    ::ll::UntypedStorage<8, 8>  mUnkb889c6;
    ::ll::UntypedStorage<8, 8>  mUnk7aae83;
    ::ll::UntypedStorage<8, 24> mUnk84a01b;
    // NOLINTEND

public:
    // prevent constructor by default
    VanillaModulesCollection& operator=(VanillaModulesCollection const&);
    VanillaModulesCollection(VanillaModulesCollection const&);
    VanillaModulesCollection();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void init(
        ::WeakRef<::EntityRegistry>                        registry,
        ::VanillaSystemsRegistration::RegistrationOptions& options,
        ::Bedrock::NonOwnerPointer<::IMinecraftEventing>   eventing
    ) /*override*/;

    // vIndex: 0
    virtual ~VanillaModulesCollection() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _setupActorMoveModule(
        ::WeakRef<::EntityRegistry>                        registry,
        ::VanillaSystemsRegistration::RegistrationOptions& options
    );

    MCNAPI void
    _setupVanillaSystemsEventing(::EntityRegistry& registry, ::Bedrock::NonOwnerPointer<::IMinecraftEventing> eventing);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $init(
        ::WeakRef<::EntityRegistry>                        registry,
        ::VanillaSystemsRegistration::RegistrationOptions& options,
        ::Bedrock::NonOwnerPointer<::IMinecraftEventing>   eventing
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
