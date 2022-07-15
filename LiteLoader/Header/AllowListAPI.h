#pragma once
#include "Global.h"
#include "third-party/Nlohmann/json.hpp"

//////////////////////////////////////////////////////
// For managing AllowList
//
// [Usage]
//
// AllowListManager().has("steve"[, "114514"]);
// AllowListManager().add("alex"[, "11451419", true]).reload();
// AllowListManager().remove("mojang"[, "233333"]).reload();
// AllowListManager().add(...).remove(...).reload();
//
// [Note]
//
// If you don't call reload after add/remove, the changes will only write to file
//   but it will not take effect in the game.
// This means the player you added won't be able to join the game until reloading
//
// 如果你在使用add/remove成员之后不调用reload函数, 这些更改将只会写入文件而不会在游戏中生效
// 这意味着你添加到白名单的玩家将不能加入游戏, 直到重载白名单
//
//////////////////////////////////////////////////////

class AllowListManager {

    void save();

public:
    nlohmann::json allowList;

    LIAPI AllowListManager();

    LIAPI size_t size();

    // @summary Return whether the player in the allowlist
    LIAPI bool has(const std::string& name, const xuid_t& xuid = "");
    // @summary Return whether the player in the allowlist
    // @param index If exists, index will be set to the array index
    LIAPI bool has(const std::string& name, const xuid_t& xuid, size_t& index);

    // @summary Add a player to allowlist
    LIAPI AllowListManager& add(const std::string& name, const xuid_t& xuid = "", bool ignore = false);

    // @summary Remove a player from allowlist
    LIAPI AllowListManager& remove(const std::string& name, const xuid_t& xuid = "");

    // @summary Reload the allowlist(Making changes effective)
    LIAPI void reload();
};
