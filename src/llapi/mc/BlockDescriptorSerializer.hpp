/**
 * @file  BlockDescriptorSerializer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  ?_validateAndCreateFromString\@BlockDescriptorSerializer\@\@YA?AVBlockDescriptor\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class BlockDescriptor _validateAndCreateFromString(std::string const &);
    /**
     * @symbol  ?fromProxy\@BlockDescriptorSerializer\@\@YAXAEAVBlockDescriptor\@\@AEAUBlockDescriptorProxy\@1\@\@Z
     */
    MCAPI void fromProxy(class BlockDescriptor &, struct BlockDescriptorSerializer::BlockDescriptorProxy &);
    /**
     * @symbol  ?fromString\@BlockDescriptorSerializer\@\@YAXAEAVBlockDescriptor\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void fromString(class BlockDescriptor &, std::string const &);
    /**
     * @symbol  ?toProxy\@BlockDescriptorSerializer\@\@YA?AUBlockDescriptorProxy\@1\@AEBVBlockDescriptor\@\@\@Z
     */
    MCAPI struct BlockDescriptorSerializer::BlockDescriptorProxy toProxy(class BlockDescriptor const &);

};