#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class FilterGroup {
public:
    // FilterGroup inner types define
    enum class CollectionType {};

public:
    // prevent constructor by default
    FilterGroup& operator=(FilterGroup const&);
    FilterGroup();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FilterGroup() = default;

    // vIndex: 1
    virtual std::shared_ptr<class FilterGroup> _createSubgroup(::FilterGroup::CollectionType type) const = 0;

    // vIndex: 2
    virtual bool _setupContext(class FilterTest const& test, struct FilterContext& context) const;

    // vIndex: 3
    virtual bool _handleUnknownMember(std::string const&, class Json::Value const&);

    MCAPI FilterGroup(class FilterGroup const&);

    MCAPI bool addFilterTest(std::string const& filterName, struct FilterInputs const& inputs);

    MCAPI bool addFilterTest(struct FilterTest::Definition const& filterDef, struct FilterInputs const& inputs);

    MCAPI bool empty() const;

    MCAPI bool evaluate(std::array<struct FilterContext, 10>& contextSet) const;

    MCAPI std::vector<std::shared_ptr<class FilterGroup>> const& getChildren() const;

    MCAPI std::vector<std::shared_ptr<class FilterTest>> const& getMembers() const;

    MCAPI bool parse(class Json::Value const& jsonVal);

    MCAPI void serialize(class Json::Value& jsonVal) const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI bool _parseFilterInputs(
        class Json::Value const&             jsonVal,
        struct FilterTest::Definition const& filterDef,
        struct FilterInputs&                 inputs
    );

    MCAPI bool _parseFilterParam(
        std::string const&                  filter,
        std::string const&                  member,
        class Json::Value const&            jsonVal,
        struct FilterParamDefinition const& paramDef,
        class FilterInput&                  input
    );

    MCAPI bool _parseMember(std::string const& name, class Json::Value const& jsonVal);

    MCAPI bool _parseObject(std::string const& name, class Json::Value const& jsonVal);

    MCAPI bool _parseTest(class Json::Value const& jsonVal);

    // NOLINTEND
};
