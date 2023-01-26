/**
 * @file   PlayerInfoAPI.h
 * @author LiteLDev (https://github.com/LiteLDev)
 * @brief  Player information database interfaces
 *
 * @copyright Copyright (c) 2021-present  LiteLoaderBDS developers and all contributors
 *
 */
#pragma once
#include "llapi/Global.h"
#include <string>
namespace PlayerInfo {


struct Info {
    std::string name; ///< Real name(xbox)
    xuid_t xuid;      ///< Xuid(online-mode is required)
    std::string uuid; ///< UUID
};

/**
 * @brief Find the information of a player by realName.
 *
 * @param  name  The player name
 * @return std::optional<Info>  The info
 */
LIAPI std::optional<Info> findByName(const std::string& name);

/**
 * @brief Find the information of a player by xuid.
 *
 * @param  xuid  The player xuid
 * @return std::optional<Info>  The info
 */
LIAPI std::optional<Info> findByXuid(const xuid_t& xuid);

/**
 * @brief Find the information of a player by UUID.
 *
 * @param  uuid  The player UUID
 * @return std::optional<Info>  The info
 */
LIAPI std::optional<Info> findByUUID(const std::string& uuid);

/**
 * @brief Get all the player names.
 *
 * @return std::vector<std::string>  The names
 */
LIAPI std::vector<std::string> getAllPlayerNames();

/**
 * @brief Get all the player info.
 *
 * @return std::vector<PlayerInfo::Info>  The info
 */
LIAPI std::vector<Info> getAllPlayerInfo();


LIAPI bool insert(std::string name, std::string xuid, std::string uuid);
LIAPI std::string getXuid(std::string name);
LIAPI std::string getUUID(std::string name);
LIAPI std::string getUUIDByXuid(xuid_t xuid) ;
LIAPI std::string fromXuid(std::string xuid);
LIAPI std::string fromUUID(std::string uuid);
LIAPI void forEachInfo(std::function<bool(std::string_view name, std::string_view xuid, std::string_view uuid)> callback);
} // namespace PlayerInfo