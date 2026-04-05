#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class DefinitionInstanceGroup;
class HashedString;
// clang-format on

class ComponentNetRelevancyRegistry {
public:
    // ComponentNetRelevancyRegistry inner types declare
    // clang-format off
    struct NetSerializationCallbacks;
    // clang-format on

    // ComponentNetRelevancyRegistry inner types define
    struct NetSerializationCallbacks {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnkd3f8f6;
        ::ll::UntypedStorage<8, 64> mUnk155c88;
        ::ll::UntypedStorage<8, 64> mUnk426685;
        // NOLINTEND

    public:
        // prevent constructor by default
        NetSerializationCallbacks& operator=(NetSerializationCallbacks const&);
        NetSerializationCallbacks(NetSerializationCallbacks const&);
        NetSerializationCallbacks();

    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI NetSerializationCallbacks(::ComponentNetRelevancyRegistry::NetSerializationCallbacks&&);

        MCNAPI ::ComponentNetRelevancyRegistry::NetSerializationCallbacks& setNeverClientSide();

        MCNAPI ~NetSerializationCallbacks();
#endif
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI void* $ctor(::ComponentNetRelevancyRegistry::NetSerializationCallbacks&&);
#endif
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI void $dtor();
#endif
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkf6cbf4;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentNetRelevancyRegistry& operator=(ComponentNetRelevancyRegistry const&);
    ComponentNetRelevancyRegistry(ComponentNetRelevancyRegistry const&);
    ComponentNetRelevancyRegistry();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::ComponentNetRelevancyRegistry::NetSerializationCallbacks& registerNetSerialization(
        ::HashedString const&                                                   definitionName,
        ::std::function<bool(::DefinitionInstanceGroup const&, ::CompoundTag&)> serializationCallback
    );
#endif

    MCNAPI bool
    serializeComponentDefinitionsForClient(::DefinitionInstanceGroup const& definitionGroup, ::CompoundTag& tag) const;

#ifdef LL_PLAT_C
    MCNAPI ~ComponentNetRelevancyRegistry();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};
