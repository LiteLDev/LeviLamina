#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterGroup.h"

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
        Default = 0,
        ReadValue = 1,
        ReadString = 2,
        Environment = 3,
        Item = 4,
        Armor = 5,
        Equipment = 6,
    };
    
    struct LegacyMapping {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnka773d2;
        ::ll::UntypedStorage<8, 8> mUnka45b28;
        ::ll::UntypedStorage<2, 2> mUnkd9e8c2;
        ::ll::UntypedStorage<2, 2> mUnk25aff8;
        ::ll::UntypedStorage<4, 4> mUnk33deca;
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
    MCNAPI bool _addLegacyFilter(::std::string const& name, ::ActorFilterGroup::LegacyMapping const& legacy, ::FilterInput const& filterInput);

    MCNAPI bool _handleUnknownMember(::std::string const& name, ::Json::Value const& jsonVal);

    MCNAPI bool _parseMemberCollectionJSONCpp(::FilterGroup::CollectionType collectionType, ::Json::Value const& jsonVal);

    MCNAPI bool _parseMemberJSONCpp(::std::string const& name, ::Json::Value const& jsonVal);

    MCNAPI bool _parseObjectJSONCpp(::std::string const& name, ::Json::Value const& jsonVal);

    MCNAPI bool _processLegacyArray(::std::string const& name, ::Json::Value const& jsonVal, ::ActorFilterGroup::LegacyMapping const& legacy);

    MCNAPI bool _processLegacyMember(::std::string const& name, ::Json::Value const& jsonVal, ::ActorFilterGroup::LegacyMapping const& legacy);

    MCNAPI bool evaluateActor(::Actor const& e, ::VariantParameterListConst const& params) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void initialize();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $parse(::Json::Value const& jsonVal);

    MCNAPI ::std::shared_ptr<::FilterGroup> $_createSubgroup(::FilterGroup::CollectionType type) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
