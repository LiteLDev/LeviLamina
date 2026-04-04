#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"

// auto generated forward declare list
// clang-format off
class FilterInput;
class FilterTest;
struct FilterContext;
struct FilterInputs;
struct FilterParamDefinition;
namespace Json { class Value; }
namespace SharedTypes::v1_21_20 { struct FilterGroupData; }
namespace SharedTypes::v1_21_20 { struct FilterTestData; }
// clang-format on

class FilterGroup {
public:
    // FilterGroup inner types define
    enum class CollectionType : int {
        And = 0,
        Or  = 1,
        Not = 2,
    };

    using Ptr = ::std::shared_ptr<::FilterGroup>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::FilterGroup::CollectionType>                    mCollectionType;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::FilterGroup>>> mChildren;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::FilterTest>>>  mMembers;
    // NOLINTEND

public:
    // prevent constructor by default
    FilterGroup& operator=(FilterGroup const&);
    FilterGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FilterGroup() = default;

    virtual bool parse(::Json::Value const& jsonVal);

    virtual ::std::shared_ptr<::FilterGroup> _createSubgroup(::FilterGroup::CollectionType type) const = 0;

    virtual bool _setupContext(::FilterTest const& test, ::FilterContext& context) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FilterGroup(::FilterGroup const&);

    MCAPI bool _parseFilterInputs(
        ::SharedTypes::v1_21_20::FilterTestData const& filterTestData,
        ::FilterTest::Definition const&                filterDef,
        ::FilterInputs&                                inputs
    );

    MCAPI bool _parseFilterParam(
        ::std::string const&                                             filter,
        ::std::string const&                                             member,
        ::std::optional<::std::variant<bool, int, float, ::std::string>> param,
        ::FilterParamDefinition const&                                   paramDef,
        ::FilterInput&                                                   input
    );

    MCAPI bool _parseMemberCollection(
        ::FilterGroup::CollectionType                   collectionType,
        ::SharedTypes::v1_21_20::FilterGroupData const& filterGroupData
    );

    MCAPI bool _parseObject(::SharedTypes::v1_21_20::FilterGroupData const& filterGroupData);

    MCAPI bool _parseTest(::SharedTypes::v1_21_20::FilterTestData const& filterTestData);

    MCAPI bool addFilterTest(::FilterTest::Definition const& filterDef, ::FilterInputs const& inputs);

    MCAPI_S bool addFilterTest(::std::string const& filterName, ::FilterInputs const& inputs);

    MCAPI bool evaluate(::std::array<::FilterContext, 10>& contextSet) const;

    MCAPI void fillFromData(::SharedTypes::v1_21_20::FilterGroupData const& filterGroupData);

    MCAPI void serialize(::Json::Value& jsonVal) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::FilterGroup const&);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $parse(::Json::Value const& jsonVal);

    MCAPI bool $_setupContext(::FilterTest const& test, ::FilterContext& context) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
