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

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkdd1627;
    ::ll::UntypedStorage<8, 24> mUnkc039d0;
    ::ll::UntypedStorage<8, 24> mUnk378121;
    // NOLINTEND

public:
    // prevent constructor by default
    FilterGroup& operator=(FilterGroup const&);
    FilterGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FilterGroup();

    // vIndex: 1
    virtual bool parse(::Json::Value const& jsonVal);

    // vIndex: 2
    virtual ::std::shared_ptr<::FilterGroup> _createSubgroup(::FilterGroup::CollectionType) const = 0;

    // vIndex: 3
    virtual bool _setupContext(::FilterTest const& test, ::FilterContext& context) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FilterGroup(::FilterGroup const&);

    MCAPI void _fillOperator(int value, ::FilterInputs& inputs);

    MCAPI void _fillSubject(int value, ::FilterInputs& inputs);

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

    MCAPI bool addFilterTest(::std::string const& filterName, ::FilterInputs const& inputs);

    MCAPI bool empty() const;

    MCAPI bool evaluate(::std::array<::FilterContext, 10>& contextSet) const;

    MCAPI void fillFromData(::SharedTypes::v1_21_20::FilterGroupData const& filterGroupData);

    MCAPI ::std::vector<::std::shared_ptr<::FilterGroup>> const& getChildren() const;

    MCAPI ::std::vector<::std::shared_ptr<::FilterTest>> const& getMembers() const;

    MCAPI void serialize(::Json::Value& jsonVal) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::FilterGroup const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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
