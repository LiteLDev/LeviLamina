#pragma once
#include <mc/Core.h>
#include <stl/optional.h>
#include <functional>
#include <string>
typedef unsigned long long xuid_t;
using std::string;
namespace XIDREG {
LIAPI optional<string> id2str(xuid_t xid);
LIAPI optional<xuid_t> str2id(string_view name);
LIAPI void foreach (std::function<bool(xuid_t, string_view)> &&);
void initAll();
}  // namespace XIDREG
