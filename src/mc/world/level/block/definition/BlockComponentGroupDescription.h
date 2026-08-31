#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
struct BlockComponentDescription;
namespace cereal { class DynamicValue; }
namespace cereal { class SerializerContext; }
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
        // Components inner types define
        using CerealDefaultValueOptOut = void;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::shared_ptr<::BlockComponentDescription>>>
            mMap;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI void _setCustomComponent(
            ::std::string_view                               compName,
            ::std::shared_ptr<::cereal::DynamicValue> const& compData,
            bool                                             overridePlayerInteract,
            bool                                             overridePlayerPlacing
        );

        MCAPI ::std::shared_ptr<::cereal::DynamicValue>
        getCustomComponent(::cereal::SerializerContext const& context) const;

        MCAPI ~Components();
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
    BlockComponentGroupDescription(BlockComponentGroupDescription const&);
    BlockComponentGroupDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::BlockComponentGroupDescription& operator=(::BlockComponentGroupDescription const&);

    MCAPI ~BlockComponentGroupDescription();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
