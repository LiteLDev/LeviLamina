#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DynamicPropertiesDefinition {

public:
    // prevent constructor by default
    DynamicPropertiesDefinition& operator=(DynamicPropertiesDefinition const&) = delete;
    DynamicPropertiesDefinition(DynamicPropertiesDefinition const&)            = delete;
    DynamicPropertiesDefinition()                                              = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?clear\@DynamicPropertiesDefinition\@\@QEAAXXZ
     */
    MCAPI void clear();
    /**
     * @symbol
     * ?defineProperty\@DynamicPropertiesDefinition\@\@QEAA?AV?$optional\@W4DynamicPropertyDefinePropertyError\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@UDynamicPropertyDefinition\@\@\@Z
     */
    MCAPI std::optional<enum class DynamicPropertyDefinePropertyError>
          defineProperty(std::string const&, struct DynamicPropertyDefinition);
    /**
     * @symbol
     * ?tryGetPropertyDefinition\@DynamicPropertiesDefinition\@\@QEBAPEBUDynamicPropertyDefinition\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI struct DynamicPropertyDefinition const* tryGetPropertyDefinition(std::string const&) const;
    /**
     * @symbol
     * ?tryMergeDefinitions\@DynamicPropertiesDefinition\@\@QEAA?AV?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@AEBV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@_K\@Z
     */
    MCAPI std::optional<std::string>
          tryMergeDefinitions(class DynamicPropertiesDefinition const&, std::string const&, uint64_t);
    /**
     * @symbol ??1DynamicPropertiesDefinition\@\@QEAA\@XZ
     */
    MCAPI ~DynamicPropertiesDefinition();
    /**
     * @symbol
     * ?clearAll\@DynamicPropertiesDefinition\@\@SAXAEBV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unique_ptr\@VActorDefinition\@\@U?$default_delete\@VActorDefinition\@\@\@std\@\@\@2\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unique_ptr\@VActorDefinition\@\@U?$default_delete\@VActorDefinition\@\@\@std\@\@\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI static void clearAll(std::unordered_map<std::string, std::unique_ptr<class ActorDefinition>> const&);
    /**
     * @symbol ?ACTOR_TOTAL_DYNAMIC_PROPERTY_SIZE_LIMIT\@DynamicPropertiesDefinition\@\@2_KB
     */
    MCAPI static uint64_t const ACTOR_TOTAL_DYNAMIC_PROPERTY_SIZE_LIMIT;
    /**
     * @symbol ?IDENTIFIER_SIZE_LIMIT\@DynamicPropertiesDefinition\@\@2_KB
     */
    MCAPI static uint64_t const IDENTIFIER_SIZE_LIMIT;
    /**
     * @symbol ?WORLD_TOTAL_DYNAMIC_PROPERTY_SIZE_LIMIT\@DynamicPropertiesDefinition\@\@2_KB
     */
    MCAPI static uint64_t const WORLD_TOTAL_DYNAMIC_PROPERTY_SIZE_LIMIT;
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_canMergeDefinitions\@DynamicPropertiesDefinition\@\@AEBA_NAEBV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_KAEAV23\@\@Z
     */
    MCAPI bool
    _canMergeDefinitions(class DynamicPropertiesDefinition const&, std::string const&, uint64_t, std::string&) const;
    // NOLINTEND
};
