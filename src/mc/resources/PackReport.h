#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class PackReport {

public:
    // prevent constructor by default
    PackReport& operator=(PackReport const&) = delete;

public:
    /**
     * @symbol ??0PackReport\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI PackReport(class PackReport const&); // NOLINT
    /**
     * @symbol ??0PackReport\@\@QEAA\@XZ
     */
    MCAPI PackReport(); // NOLINT
    /**
     * @symbol ??0PackReport\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI PackReport(class PackReport&&); // NOLINT
    /**
     * @symbol
     * ?getErrors\@PackReport\@\@QEBAAEBV?$vector\@V?$shared_ptr\@VPackError\@\@\@std\@\@V?$allocator\@V?$shared_ptr\@VPackError\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<class std::shared_ptr<class PackError>> const& getErrors() const; // NOLINT
    /**
     * @symbol ?getIdentity\@PackReport\@\@QEBAAEBUPackIdVersion\@\@XZ
     */
    MCAPI struct PackIdVersion const& getIdentity() const; // NOLINT
    /**
     * @symbol ?getLocation\@PackReport\@\@QEBAAEBVResourceLocation\@\@XZ
     */
    MCAPI class ResourceLocation const& getLocation() const; // NOLINT
    /**
     * @symbol
     * ?getOriginalName\@PackReport\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getOriginalName() const; // NOLINT
    /**
     * @symbol
     * ?getOriginalVersion\@PackReport\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getOriginalVersion() const; // NOLINT
    /**
     * @symbol ?getPackType\@PackReport\@\@QEBA?AW4PackType\@\@XZ
     */
    MCAPI enum class PackType getPackType() const; // NOLINT
    /**
     * @symbol ?hasErrors\@PackReport\@\@QEBA_NXZ
     */
    MCAPI bool hasErrors() const; // NOLINT
    /**
     * @symbol ?serialize\@PackReport\@\@QEAAXAEAVValue\@Json\@\@\@Z
     */
    MCAPI void serialize(class Json::Value&); // NOLINT
    /**
     * @symbol ?setLocation\@PackReport\@\@QEAAXAEBVResourceLocation\@\@\@Z
     */
    MCAPI void setLocation(class ResourceLocation const&); // NOLINT
    /**
     * @symbol ?wasUpgraded\@PackReport\@\@QEBA_NXZ
     */
    MCAPI bool wasUpgraded() const; // NOLINT
    /**
     * @symbol ??1PackReport\@\@QEAA\@XZ
     */
    MCAPI ~PackReport(); // NOLINT
};
