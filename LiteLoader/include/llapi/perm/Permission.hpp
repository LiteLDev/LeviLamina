/**
 * @file   Foundation.hpp
 * @author LiteLDev (https://github.com/LiteLDev)
 * @brief  Permission classes for PermissionAPI
 * 
 * @copyright Copyright (c) 2021-present  LiteLoaderBDS developers and all contributors
 * 
 */
#pragma once
#include <Nlohmann/json.hpp>
#include "llapi/perm/Foundation.hpp"

namespace ll::perm {


    struct PermInstance {
        std::string name;        ///< Name of the permission.
        bool enabled;            ///< Whether the permission is enabled.
        ::nlohmann::json extra;  ///< Extra data for the permission.

        static constexpr const std::string_view permNameInvalidChars = " \t\n\r\f\v";  ///< Invalid characters for the permission name.
        /**
         * @brief Get the namespace of the permission.
         *
         * @return std::string  The namespace of the permission.
         */
        inline std::string namespc() const {
            return this->name.substr(0, this->name.find_first_of(':'));
        }

        /**
         * @brief Check whether a permission name is valid.
         * 
         * @param  name  The permission name to check.
         * @return bool  True if the permission name is valid, false otherwise.
         */
        static bool isValidPermissionName(const std::string& name) {
            return name.find_first_of(PermInstance::permNameInvalidChars.data()) == std::string::npos && // Not contain invalid chars
                   name.find_first_of(':') != std::string::npos &&                                       // Has at least one :
                   name.find_first_of(':') != 0 &&                                                       // Not start with :
                   name.find_last_of(':') != name.size() - 1;                                            // Not end with :
        }
    };


    struct PermInfo {
        std::string name; ///< Name of the permission.
        std::string desc; ///< Description of the permission.
    };

    using Permissions = PermContainer<PermInstance>;
    using PermInfoList = PermContainer<PermInfo>;

} // namespace PERM