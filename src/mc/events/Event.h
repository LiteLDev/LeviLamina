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
    Event& operator=(Event const&) = delete;
    Event()                        = delete;

public:
    /**
     * @symbol
     * ??0Event\@Events\@Social\@\@QEAA\@IAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$QEAV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VProperty\@Events\@Social\@\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VProperty\@Events\@Social\@\@\@std\@\@\@2\@\@4\@AEBV?$NonOwnerPointer\@VAppPlatform\@\@\@Bedrock\@\@H\@Z
     */
    MCAPI Event(
        unsigned int,
        std::string const&,
        class std::unordered_map<
            std::string,
            class Social::Events::Property,
            struct std::hash<std::string>,
            struct std::equal_to<std::string>,
            class std::allocator<struct std::pair<std::string const, class Social::Events::Property>>>&&,
        class Bedrock::NonOwnerPointer<class AppPlatform> const&,
        int
    ); // NOLINT
    /**
     * @symbol
     * ??0Event\@Events\@Social\@\@QEAA\@IAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$QEAV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VProperty\@Events\@Social\@\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VProperty\@Events\@Social\@\@\@std\@\@\@2\@\@4\@H\@Z
     */
    MCAPI Event(
        unsigned int,
        std::string const&,
        class std::unordered_map<
            std::string,
            class Social::Events::Property,
            struct std::hash<std::string>,
            struct std::equal_to<std::string>,
            class std::allocator<struct std::pair<std::string const, class Social::Events::Property>>>&&,
        int
    ); // NOLINT
    /**
     * @symbol ??0Event\@Events\@Social\@\@QEAA\@AEBV012\@\@Z
     */
    MCAPI Event(class Social::Events::Event const&); // NOLINT
    /**
     * @symbol ?addProperty\@Event\@Events\@Social\@\@QEAAXAEBVProperty\@23\@\@Z
     */
    MCAPI void addProperty(class Social::Events::Property const&); // NOLINT
    /**
     * @symbol ?hasEventTags\@Event\@Events\@Social\@\@QEBA_NH\@Z
     */
    MCAPI bool hasEventTags(int) const; // NOLINT
    /**
     * @symbol ?hasMeasurements\@Event\@Events\@Social\@\@QEBA_NXZ
     */
    MCAPI bool hasMeasurements() const; // NOLINT
    /**
     * @symbol ?measurementsAsJsonValue\@Event\@Events\@Social\@\@QEBA?AVValue\@Json\@\@XZ
     */
    MCAPI class Json::Value measurementsAsJsonValue() const; // NOLINT
    /**
     * @symbol ??8Event\@Events\@Social\@\@QEBA_NAEBV012\@\@Z
     */
    MCAPI bool operator==(class Social::Events::Event const&) const; // NOLINT
    /**
     * @symbol ?passesFilter\@Event\@Events\@Social\@\@QEBA_NH\@Z
     */
    MCAPI bool passesFilter(int) const; // NOLINT
    /**
     * @symbol ?propertiesAsJsonValue\@Event\@Events\@Social\@\@QEBA?AVValue\@Json\@\@XZ
     */
    MCAPI class Json::Value propertiesAsJsonValue() const; // NOLINT
    /**
     * @symbol ?updateMeasurements\@Event\@Events\@Social\@\@QEAAXAEBV123\@\@Z
     */
    MCAPI void updateMeasurements(class Social::Events::Event const&); // NOLINT
    /**
     * @symbol ??1Event\@Events\@Social\@\@QEAA\@XZ
     */
    MCAPI ~Event(); // NOLINT
};

}; // namespace Social::Events
