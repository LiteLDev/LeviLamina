#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/entity/components_json_legacy/DismountMode.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class RideableComponent;
struct SeatDescription;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class RideableDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                      mSeatCount;
    ::ll::TypedStorage<4, 4, int>                                                      mControllingSeat;
    ::ll::TypedStorage<1, 1, bool>                                                     mSkipInteractIfCrouching;
    ::ll::TypedStorage<8, 24, ::std::vector<::SeatDescription>>                        mSeats;
    ::ll::TypedStorage<8, 16, ::std::set<::HashedString, ::std::hash<::HashedString>>> mFamilyTypes;
    ::ll::TypedStorage<8, 32, ::std::string>                                           mInteractText;
    ::ll::TypedStorage<1, 1, bool>                                                     mPullInEntities;
    ::ll::TypedStorage<1, 1, bool>                                                     mPassengerCanPick;
    ::ll::TypedStorage<4, 4, float>                                                    mPassengerMaxWidth;
    ::ll::TypedStorage<1, 1, ::DismountMode>                                           mDismountMode;
    ::ll::TypedStorage<8, 32, ::std::string>                                           mOnRiderEnterEvent;
    ::ll::TypedStorage<8, 32, ::std::string>                                           mOnRiderExitEvent;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addFamilyTypeByName(::std::string const& name);

    MCAPI void initialize(::EntityContext& entity, ::RideableComponent& component) const;

    MCAPI void setDismountMode(::std::string const& mode);

    MCAPI ~RideableDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::RideableDefinition>>& root
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
