#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Puv {
// NOLINTBEGIN
/**
 * @symbol
 * ?peekJsonVersion\@Puv\@\@YA?AVSemVersion\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
 */
MCAPI class SemVersion peekJsonVersion(std::string const&);
/**
 * @symbol
 * ?peekJsonVersion\@Puv\@\@YA?AVSemVersion\@\@AEBV?$GenericValue\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@\@rapidjson\@\@\@Z
 */
MCAPI class SemVersion peekJsonVersion(class rapidjson::GenericValue<
                                       struct rapidjson::UTF8<char>,
                                       class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>> const&);
// NOLINTEND

}; // namespace Puv
