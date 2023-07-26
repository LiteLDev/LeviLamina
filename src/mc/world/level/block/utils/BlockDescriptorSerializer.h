#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace BlockDescriptorSerializer { struct BlockDescriptorProxy; }
// clang-format on

namespace BlockDescriptorSerializer {
/**
 * @symbol
 * ?_validateAndCreateFromString\@BlockDescriptorSerializer\@\@YA?AVBlockDescriptor\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
 */
MCAPI class BlockDescriptor _validateAndCreateFromString(std::string const&); // NOLINT
/**
 * @symbol ?fromProxy\@BlockDescriptorSerializer\@\@YAXAEAVBlockDescriptor\@\@AEAUBlockDescriptorProxy\@1\@\@Z
 */
MCAPI void fromProxy(class BlockDescriptor&, struct BlockDescriptorSerializer::BlockDescriptorProxy&); // NOLINT
/**
 * @symbol
 * ?fromString\@BlockDescriptorSerializer\@\@YAXAEAVBlockDescriptor\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
 */
MCAPI void fromString(class BlockDescriptor&, std::string const&); // NOLINT
/**
 * @symbol ?toProxy\@BlockDescriptorSerializer\@\@YA?AUBlockDescriptorProxy\@1\@AEBVBlockDescriptor\@\@\@Z
 */
MCAPI struct BlockDescriptorSerializer::BlockDescriptorProxy toProxy(class BlockDescriptor const&); // NOLINT

}; // namespace BlockDescriptorSerializer
