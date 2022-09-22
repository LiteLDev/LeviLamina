/**
 * @file  BlockDescriptorSerializer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace BlockDescriptorSerializer.
 *
 */
namespace BlockDescriptorSerializer {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @hash   -1075276317
     * @symbol ?fromProxy@BlockDescriptorSerializer@@YAXAEAVBlockDescriptor@@UBlockDescriptorProxy@1@@Z
     */
    MCAPI void fromProxy(class BlockDescriptor &, struct BlockDescriptorSerializer::BlockDescriptorProxy);
    /**
     * @hash   -55371606
     * @symbol ?fromString@BlockDescriptorSerializer@@YAXAEAVBlockDescriptor@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void fromString(class BlockDescriptor &, std::string const &);
    /**
     * @hash   353096693
     * @symbol ?fromTags@BlockDescriptorSerializer@@YAXAEAVBlockDescriptor@@AEBV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@AEBVBedrockLoadContext@@@Z
     */
    MCAPI void fromTags(class BlockDescriptor &, class std::map<std::string, std::string, struct std::less<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> const &, class BedrockLoadContext const &);
    /**
     * @hash   -285991257
     * @symbol ?toProxy@BlockDescriptorSerializer@@YA?AUBlockDescriptorProxy@1@AEBVBlockDescriptor@@@Z
     */
    MCAPI struct BlockDescriptorSerializer::BlockDescriptorProxy toProxy(class BlockDescriptor const &);

};