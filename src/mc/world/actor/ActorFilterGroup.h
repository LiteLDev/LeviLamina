#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterGroup.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorFilterGroup : public ::FilterGroup {
public:
    // ActorFilterGroup inner types declare
    // clang-format off
    struct LegacyMapping;
    // clang-format on

    // ActorFilterGroup inner types define
    struct LegacyMapping {
    public:
        // prevent constructor by default
        LegacyMapping& operator=(LegacyMapping const&);
        LegacyMapping(LegacyMapping const&);
        LegacyMapping();
    };

public:
    // prevent constructor by default
    ActorFilterGroup(ActorFilterGroup const&);
    ActorFilterGroup();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorFilterGroup();

    // vIndex: 1
    virtual std::shared_ptr<class FilterGroup> _createSubgroup(::FilterGroup::CollectionType type) const;

    // vIndex: 3
    virtual bool _handleUnknownMember(std::string const& name, class Json::Value const& jsonVal);

    MCAPI bool evaluateActor(class Actor const& e, class VariantParameterList const& params) const;

    MCAPI class ActorFilterGroup& operator=(class ActorFilterGroup&&);

    MCAPI class ActorFilterGroup& operator=(class ActorFilterGroup const&);

    MCAPI static void initialize();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI bool _addLegacyFilter(
        std::string const&                            name,
        struct ActorFilterGroup::LegacyMapping const& legacy,
        class FilterInput const&                      filterInput
    );

    MCAPI bool _processLegacyArray(
        std::string const&                            name,
        class Json::Value const&                      jsonVal,
        struct ActorFilterGroup::LegacyMapping const& legacy
    );

    MCAPI bool _processLegacyMember(
        std::string const&                            name,
        class Json::Value const&                      jsonVal,
        struct ActorFilterGroup::LegacyMapping const& legacy
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    MCAPI std::shared_ptr<class FilterGroup> _createSubgroup$(::FilterGroup::CollectionType type) const;

    MCAPI bool _handleUnknownMember$(std::string const& name, class Json::Value const& jsonVal);

    // NOLINTEND
};
