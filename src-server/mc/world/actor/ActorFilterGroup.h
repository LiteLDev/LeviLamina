#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/FilterSubject.h"
#include "mc/world/filters/FilterGroup.h"
#include "mc/world/filters/FilterOperator.h"
#include "mc/world/filters/FilterTest.h"

// auto generated forward declare list
// clang-format off
class Actor;
class FilterInput;
struct VariantParameterListConst;
namespace Json { class Value; }
// clang-format on

class ActorFilterGroup : public ::FilterGroup {
public:
    // ActorFilterGroup inner types declare
    // clang-format off
    struct LegacyMapping;
    // clang-format on

    // ActorFilterGroup inner types define
    enum class Processing : int {
        Default     = 0,
        ReadValue   = 1,
        ReadString  = 2,
        Environment = 3,
        Item        = 4,
        Armor       = 5,
        Equipment   = 6,
    };

    struct LegacyMapping {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::FilterGroup::CollectionType>        mType;
        ::ll::TypedStorage<8, 8, ::FilterTest::Definition const&>      mFilterDef;
        ::ll::TypedStorage<2, 2, ::SharedTypes::Legacy::FilterSubject> mSubject;
        ::ll::TypedStorage<2, 2, ::FilterOperator>                     mOperator;
        ::ll::TypedStorage<4, 4, ::ActorFilterGroup::Processing>       mProcess;
        // NOLINTEND

    public:
        // prevent constructor by default
        LegacyMapping& operator=(LegacyMapping const&);
        LegacyMapping(LegacyMapping const&);
        LegacyMapping();
    };

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool parse(::Json::Value const& jsonVal) /*override*/;

    // vIndex: 2
    virtual ::std::shared_ptr<::FilterGroup> _createSubgroup(::FilterGroup::CollectionType type) const /*override*/;

    // vIndex: 0
    virtual ~ActorFilterGroup() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _addLegacyFilter(
        ::std::string const&                     name,
        ::ActorFilterGroup::LegacyMapping const& legacy,
        ::FilterInput const&                     filterInput
    );

    MCAPI bool _handleUnknownMember(::std::string const& name, ::Json::Value const& jsonVal);

    MCAPI bool
    _parseMemberCollectionJSONCpp(::FilterGroup::CollectionType collectionType, ::Json::Value const& jsonVal);

    MCAPI bool _parseMemberJSONCpp(::std::string const& name, ::Json::Value const& jsonVal);

    MCAPI bool _parseObjectJSONCpp(::std::string const& name, ::Json::Value const& jsonVal);

    MCAPI bool _processLegacyArray(
        ::std::string const&                     name,
        ::Json::Value const&                     jsonVal,
        ::ActorFilterGroup::LegacyMapping const& legacy
    );

    MCAPI bool _processLegacyMember(
        ::std::string const&                     name,
        ::Json::Value const&                     jsonVal,
        ::ActorFilterGroup::LegacyMapping const& legacy
    );

    MCAPI bool evaluateActor(::Actor const& e, ::VariantParameterListConst const& params) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void initialize();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $parse(::Json::Value const& jsonVal);

    MCAPI ::std::shared_ptr<::FilterGroup> $_createSubgroup(::FilterGroup::CollectionType type) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
