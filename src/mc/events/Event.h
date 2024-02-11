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
    // symbol: ??0Event@Events@Social@@QEAA@AEBV012@@Z
    MCAPI Event(class Social::Events::Event const&);

    // symbol:
    // ??0Event@Events@Social@@QEAA@IAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$QEAV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VProperty@Events@Social@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VProperty@Events@Social@@@std@@@2@@4@H@Z
    MCAPI Event(
        uint                                                              id,
        std::string const&                                                eventName,
        std::unordered_map<std::string, class Social::Events::Property>&& commonProperties,
        int                                                               eventTags
    );

    // symbol:
    // ??0Event@Events@Social@@QEAA@IAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$QEAV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VProperty@Events@Social@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VProperty@Events@Social@@@std@@@2@@4@AEBV?$NonOwnerPointer@VAppPlatform@@@Bedrock@@H@Z
    MCAPI Event(
        uint                                                              id,
        std::string const&                                                eventName,
        std::unordered_map<std::string, class Social::Events::Property>&& commonProperties,
        class Bedrock::NonOwnerPointer<class AppPlatform> const&          appPlatform,
        int                                                               eventTags
    );

    // symbol: ?addProperty@Event@Events@Social@@QEAAXAEBVProperty@23@@Z
    MCAPI void addProperty(class Social::Events::Property const& property);

    // symbol: ??8Event@Events@Social@@QEBA_NAEBV012@@Z
    MCAPI bool operator==(class Social::Events::Event const& other) const;

    // symbol: ?propertiesAsJsonValue@Event@Events@Social@@QEBA?AVValue@Json@@XZ
    MCAPI class Json::Value propertiesAsJsonValue() const;

    // symbol: ?updateMeasurements@Event@Events@Social@@QEAAXAEBV123@@Z
    MCAPI void updateMeasurements(class Social::Events::Event const& event);

    // symbol: ??1Event@Events@Social@@QEAA@XZ
    MCAPI ~Event();

    // NOLINTEND
};

}; // namespace Social::Events
