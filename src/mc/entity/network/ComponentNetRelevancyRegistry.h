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
        MCNAPI_C NetSerializationCallbacks(::ComponentNetRelevancyRegistry::NetSerializationCallbacks&&);

        MCNAPI_C ::ComponentNetRelevancyRegistry::NetSerializationCallbacks& setNeverClientSide();

        MCNAPI_C ~NetSerializationCallbacks();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI_C void* $ctor(::ComponentNetRelevancyRegistry::NetSerializationCallbacks&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI_C void $dtor();
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
    MCNAPI_C ::ComponentNetRelevancyRegistry::NetSerializationCallbacks& registerNetSerialization(
        ::HashedString const&                                                   definitionName,
        ::std::function<bool(::DefinitionInstanceGroup const&, ::CompoundTag&)> serializationCallback
    );

    MCNAPI bool
    serializeComponentDefinitionsForClient(::DefinitionInstanceGroup const& definitionGroup, ::CompoundTag& tag) const;

    MCNAPI_C ~ComponentNetRelevancyRegistry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
