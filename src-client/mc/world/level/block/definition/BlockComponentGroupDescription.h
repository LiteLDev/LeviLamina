#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
struct BlockComponentDescription;
namespace cereal { struct DynamicValue; }
namespace cereal { struct SerializerContext; }
// clang-format on

struct BlockComponentGroupDescription {
public:
    // BlockComponentGroupDescription inner types declare
    // clang-format off
    struct Components;
    // clang-format on

    // BlockComponentGroupDescription inner types define
    struct Components {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::shared_ptr<::BlockComponentDescription>>>
            mMap;
        // NOLINTEND

    public:
        // prevent constructor by default
        Components();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI Components(::BlockComponentGroupDescription::Components const&);

        MCAPI void _setCustomComponent(
            ::std::string_view                               compName,
            ::std::shared_ptr<::cereal::DynamicValue> const& compData,
            bool                                             overridePlayerInteract,
            bool                                             overridePlayerPlacing
        );

        MCAPI ::std::shared_ptr<::cereal::DynamicValue>
        getCustomComponent(::cereal::SerializerContext const& context) const;

        MCFOLD ::BlockComponentGroupDescription::Components&
        operator=(::BlockComponentGroupDescription::Components const&);

        MCAPI ~Components();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::BlockComponentGroupDescription::Components const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::BlockComponentGroupDescription::Components>                  mCerealDescriptions;
    ::ll::TypedStorage<8, 24, ::std::vector<::HashedString>>                                 mTags;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::BlockComponentDescription>>> mDescriptions;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockComponentGroupDescription& operator=(BlockComponentGroupDescription const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockComponentGroupDescription();

    MCAPI BlockComponentGroupDescription(::BlockComponentGroupDescription&&);

    MCAPI BlockComponentGroupDescription(::BlockComponentGroupDescription const&);

    MCAPI void addComponentDescription(::std::shared_ptr<::BlockComponentDescription> desc);

    MCAPI ::BlockComponentGroupDescription& operator=(::BlockComponentGroupDescription&&);

    MCAPI ~BlockComponentGroupDescription();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::BlockComponentGroupDescription&&);

    MCAPI void* $ctor(::BlockComponentGroupDescription const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
