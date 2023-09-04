//
// Created by RimuruChan on 2023/7/26.
//

#include "Test.h"
#include "TestManager.h"
namespace ll::test {

void Test::pass(std::string_view message) { TestManager::getInstance().submitResult(this, Result::passed(message)); }

void Test::fail(std::string_view message) { TestManager::getInstance().submitResult(this, Result::failed(message)); }

} // namespace ll::test
