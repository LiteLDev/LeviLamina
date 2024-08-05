#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
namespace Json { class Value; }
namespace Social::Events { class Property; }
// clang-format on

namespace Social::Events {

class Event {
public:
    // prevent constructor by default
    Event& operator=(Event const&);
    Event();

public:
    // NOLINTBEGIN
    MCAPI Event(class Social::Events::Event const&);

    MCAPI Event(
        uint                                                              id,
        std::string const&                                                eventName,
        std::unordered_map<std::string, class Social::Events::Property>&& commonProperties,
        int                                                               eventTags
    );

    MCAPI Event(
        uint                                                              id,
        std::string const&                                                eventName,
        std::unordered_map<std::string, class Social::Events::Property>&& commonProperties,
        class Bedrock::NonOwnerPointer<class AppPlatform> const&          appPlatform,
        int                                                               eventTags
    );

    MCAPI void addProperty(class Social::Events::Property const& property);

    MCAPI bool hasEventTags(int tags) const;

    MCAPI bool hasMeasurements() const;

    MCAPI bool operator==(class Social::Events::Event const& other) const;

    MCAPI bool passesFilter(int tagsToExclude) const;

    MCAPI class Json::Value propertiesAsJsonValue() const;

    MCAPI void stampWithRecord(uint recordSequence);

    MCAPI void updateMeasurements(class Social::Events::Event const& event);

    MCAPI ~Event();

    // NOLINTEND
};

}; // namespace Social::Events
