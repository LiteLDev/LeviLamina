/**
 * @file   PermissionAPI.h
 * @author LiteLDev (https://github.com/LiteLDev)
 * @brief  Permission APIs
 *
 * @copyright Copyright (c) 2021-present  LiteLoaderBDS developers and all contributors
 *
 */
#pragma once
#include "liteloader/api/LLAPI.h"
#include "liteloader/api/perm/Role.hpp"


class DynPermissionAPI {

    using FuncCreateRole           = void (*)(std::string const&, std::string const&, std::weak_ptr<ll::perm::Role>&);
    using FuncRoleExists           = bool (*)(std::string const&);
    using FuncGetRole              = void (*)(std::string const&, std::weak_ptr<ll::perm::Role>&);
    using FuncGetOrCreateRole      = void (*)(std::string const&, std::weak_ptr<ll::perm::Role>&);
    using FuncDeleteRole           = void (*)(std::string const&);
    using FuncRegisterPermission   = void (*)(std::string const&, std::string const&);
    using FuncDeletePermission     = void (*)(std::string const&);
    using FuncPermissionExists     = bool (*)(std::string const&);
    using FuncCheckPermission      = bool (*)(std::string const&, std::string const&);
    using FuncIsMemberOf           = bool (*)(std::string const&, std::string const&);
    using FuncGetPlayerRoles       = void (*)(std::string const&, ll::perm::Roles&);
    using FuncGetPlayerPermissions = void (*)(std::string const&, ll::perm::Permissions&);
    using FuncSaveData             = void (*)();

    HMODULE                  handle                   = nullptr;
    FuncCreateRole           funcCreateRole           = nullptr;
    FuncRoleExists           funcRoleExists           = nullptr;
    FuncGetRole              funcGetRole              = nullptr;
    FuncGetOrCreateRole      funcGetOrCreateRole      = nullptr;
    FuncDeleteRole           funcDeleteRole           = nullptr;
    FuncRegisterPermission   funcRegisterPermission   = nullptr;
    FuncDeletePermission     funcDeletePermission     = nullptr;
    FuncPermissionExists     funcPermissionExists     = nullptr;
    FuncCheckPermission      funcCheckPermission      = nullptr;
    FuncIsMemberOf           funcIsMemberOf           = nullptr;
    FuncGetPlayerRoles       funcGetPlayerRoles       = nullptr;
    FuncGetPlayerPermissions funcGetPlayerPermissions = nullptr;
    FuncSaveData             funcSaveData             = nullptr;

    template <typename T>
    T getFunc(std::string const& name) {
        return reinterpret_cast<T>(GetProcAddress(handle, name.c_str()));
    }

public:
    DynPermissionAPI() = default;

    /**
     * @brief Init APIs by GetAddressProc.
     *
     */
    void init(HMODULE hModule = nullptr) {
        if (!hModule) {
            auto pPtr = ll::getPlugin("LLPermission");
            if (!pPtr) { throw std::runtime_error("Cannot get the plugin object"); }
            handle = pPtr->handle;
        } else {
            handle = hModule;
        }
        funcCreateRole           = getFunc<FuncCreateRole>("PERM_CreateRole");
        funcRoleExists           = getFunc<FuncRoleExists>("PERM_RoleExists");
        funcGetRole              = getFunc<FuncGetRole>("PERM_GetRole");
        funcGetOrCreateRole      = getFunc<FuncGetOrCreateRole>("PERM_GetOrCreateRole");
        funcDeleteRole           = getFunc<FuncDeleteRole>("PERM_DeleteRole");
        funcRegisterPermission   = getFunc<FuncRegisterPermission>("PERM_RegisterPermission");
        funcDeletePermission     = getFunc<FuncDeletePermission>("PERM_DeletePermission");
        funcPermissionExists     = getFunc<FuncPermissionExists>("PERM_PermissionExists");
        funcCheckPermission      = getFunc<FuncCheckPermission>("PERM_CheckPermission");
        funcIsMemberOf           = getFunc<FuncIsMemberOf>("PERM_IsMemberOf");
        funcGetPlayerRoles       = getFunc<FuncGetPlayerRoles>("PERM_GetPlayerRoles");
        funcGetPlayerPermissions = getFunc<FuncGetPlayerPermissions>("PERM_GetPlayerPermissions");
        funcSaveData             = getFunc<FuncSaveData>("PERM_SaveData");
    }

    /**
     * @brief Create a Role object.
     *
     * @param  name         The name of the role.
     * @param  displayName  The display name of the role.
     * @return std::weak_ptr<PERM::Role>  The created role(weak ref).
     * @throws std::invalid_argument      If the role already exists.
     * @par Example
     * @code
     * PermissionAPI api;
     * auto role = api.createRole("role1", "Role 1");
     * ...
     * if (!role.expired()) {
     *     auto rolePtr = role.lock();
     *     rolePtr->addMember("hello");
     *     api.saveData();
     * }
     * @endcode
     */
    std::weak_ptr<ll::perm::Role> createRole(std::string const& name, std::string const& displayName) {
        if (funcCreateRole == nullptr) { throw std::runtime_error("Function not found"); }
        std::weak_ptr<ll::perm::Role> ptr{};
        funcCreateRole(name, displayName, ptr);
        return ptr;
    }

    /**
     * @brief Check if a role exists.
     *
     * @param  name  The name of the role.
     * @return bool  True If the role exists, false otherwise.
     */
    bool roleExists(std::string const& name) {
        if (funcRoleExists == nullptr) { throw std::runtime_error("Function not found"); }
        return funcRoleExists(name);
    }

    /**
     * @brief Get a role object.
     *
     * @param  name                       The name of the role.
     * @return std::weak_ptr<PERM::Role>  The role(weak ref).
     * @throws std::invalid_argument      If the role does not exist.
     */
    std::weak_ptr<ll::perm::Role> getRole(std::string const& name) {
        if (funcGetRole == nullptr) { throw std::runtime_error("Function not found"); }
        std::weak_ptr<ll::perm::Role> ptr{};
        funcGetRole(name, ptr);
        return ptr;
    }

    /**
     * @brief Get a role object. If the role does not exist, it will be created.
     *
     * @param  name                       The name of the role.
     * @return std::weak_ptr<PERM::Role>  The role(weak ref).
     */
    std::weak_ptr<ll::perm::Role> getOrCreateRole(std::string const& name) {
        if (funcGetOrCreateRole == nullptr) { throw std::runtime_error("Function not found"); }
        std::weak_ptr<ll::perm::Role> ptr{};
        funcGetOrCreateRole(name, ptr);
        return ptr;
    }

    /**
     * @brief Delete a role.
     *
     * @param  name  The name of the role.
     */
    void deleteRole(std::string const& name) {
        if (funcDeleteRole == nullptr) { throw std::runtime_error("Function not found"); }
        funcDeleteRole(name);
    }

    /**
     * @brief Register an permission.
     *
     * @param name  The name of the permission.
     * @param desc  The description name of the permission.
     */
    void registerPermission(std::string const& name, std::string const& desc) {
        if (funcRegisterPermission == nullptr) { throw std::runtime_error("Function not found"); }
        funcRegisterPermission(name, desc);
    }

    /**
     * @brief Delete a permission.
     *
     * @param    name  The name of the permission.
     * @warning  This function will also delete the permission instances in roles.
     */
    void deletePermission(std::string const& name) {
        if (funcDeletePermission == nullptr) { throw std::runtime_error("Function not found"); }
        funcDeletePermission(name);
    }

    /**
     * @brief Check if a permission exists.
     *
     * @param  name  The name of the permission.
     * @return bool  True If the permission exists, false otherwise.
     */
    bool permissionExists(std::string const& name) {
        if (funcPermissionExists == nullptr) { throw std::runtime_error("Function not found"); }
        return funcPermissionExists(name);
    }

    /**
     * @brief Check whether the player has the Permission or not.
     *
     * @param  xuid  The xuid of the player.
     * @param  name  The name of the Permission.
     * @return bool  True If the player has the Permission, false otherwise.
     */
    bool checkPermission(std::string const& xuid, std::string const& name) {
        if (funcCheckPermission == nullptr) { throw std::runtime_error("Function not found"); }
        return funcCheckPermission(xuid, name);
    }

    /**
     * @brief Check if a player is a member of a role.
     *
     * @param  xuid  The xuid of the player.
     * @param  name  The name of the role.
     * @return bool  True If the player is a member of the role, false otherwise.
     */
    bool isMemberOf(std::string const& xuid, std::string const& name) {
        if (funcIsMemberOf == nullptr) { throw std::runtime_error("Function not found"); }
        return funcIsMemberOf(xuid, name);
    }

    /**
     * @brief Get the roles of a player.
     *
     * @param  xuid         The xuid of the player.
     * @return PERM::Roles  The roles of the player.
     */
    ll::perm::Roles getPlayerRoles(std::string const& xuid) {
        if (funcGetPlayerRoles == nullptr) { throw std::runtime_error("Function not found"); }
        ll::perm::Roles roles;
        funcGetPlayerRoles(xuid, roles);
        return roles;
    }

    /**
     * @brief Get the permissions of a player.
     *
     * @param  xuid               The xuid of the player.
     * @return PERM::Permissions  The permissions of the player.
     */
    ll::perm::Permissions getPlayerPermissions(std::string const& xuid) {
        if (funcGetPlayerPermissions == nullptr) { throw std::runtime_error("Function not found"); }
        ll::perm::Permissions permissions;
        funcGetPlayerPermissions(xuid, permissions);
        return permissions;
    }

    /**
     * @brief Save the data.
     */
    void saveData() {
        if (funcSaveData == nullptr) { throw std::runtime_error("Function not found"); }
        funcSaveData();
    }
};


class Permission {

public:
    LLAPI static DynPermissionAPI api;

    static void init(HMODULE hModule = nullptr) { api.init(hModule); }

    /**
     * @brief Create a Role object.
     *
     * @param  name         The name of the role.
     * @param  displayName  The display name of the role.
     * @return std::weak_ptr<PERM::Role>  The created role(weak ref).
     * @throws std::invalid_argument      If the role already exists.
     * @par Example
     * @code
     * auto role = Permission::createRole("role1", "Role 1");
     * ...
     * if (!role.expired()) {
     *     auto rolePtr = role.lock();
     *     rolePtr->addMember("hello");
     *     api.saveData();
     * }
     * @endcode
     */
    static std::weak_ptr<ll::perm::Role> createRole(std::string const& name, std::string const& displayName) {
        return api.createRole(name, displayName);
    }

    /**
     * @brief Get a role object.
     *
     * @param  name  The name of the role.
     * @return std::weak_ptr<PERM::Role>  The role(weak ref).
     * @throws std::invalid_argument      If the role does not exist.
     * @par Example
     * @code
     * auto role = Permission::getRole("role1");
     * ...
     * if (!role.expired()) {
     *     auto rolePtr = role.lock();
     *     rolePtr->addMember("hello");
     *     api.saveData();
     * }
     * @endcode
     */
    static std::weak_ptr<ll::perm::Role> getRole(std::string const& name) { return api.getRole(name); }

    /**
     * @brief Get or create a role object.
     *
     * @param  name  The name of the role.
     * @return std::weak_ptr<PERM::Role>  The role(weak ref).
     */
    static std::weak_ptr<ll::perm::Role> getOrCreateRole(std::string const& name) { return api.getOrCreateRole(name); }

    /**
     * @brief Delete a role.
     *
     * @param  name  The name of the role.
     * @throws std::invalid_argument  If the role does not exist.
     * @par Example
     * @code
     * Permission::deleteRole("role1");
     * @endcode
     */
    static void deleteRole(std::string const& name) { api.deleteRole(name); }

    /**
     * @brief Check whether a role exists.
     *
     * @param  name  The name of the role.
     * @return bool  True If the role exists, false otherwise.
     */
    static bool roleExists(std::string const& name) { return api.roleExists(name); }

    /**
     * @brief Register an permission.
     *
     * @param  name  The name of the permission.
     * @param  desc  The description name of the permission.
     * @throws std::invalid_argument  If the permission already exists.
     * @par Example
     * @code
     * Permission::registerPermission("MyPlugin:destroy", "Destroy permission for MyPlugin");
     * @endcode
     */
    static void registerPermission(std::string const& name, std::string const& desc) {
        api.registerPermission(name, desc);
    }

    /**
     * @brief Delete a permission.
     *
     * @param  name  The name of the permission.
     * @throws std::invalid_argument  If the permission does not exist.
     * @note   This function will also delete the permission instances in roles.
     * @par Example
     * @code
     * Permission::deletePermission("MyPlugin:destroy");
     * @endcode
     */
    static void deletePermission(std::string const& name) { api.deletePermission(name); }

    /**
     * @brief Check whether a permission exists.
     *
     * @param  name  The name of the permission.
     * @return bool  True If the permission exists, false otherwise.
     */
    static bool permissionExists(std::string const& name) { return api.permissionExists(name); }

    /**
     * @brief Check whether a player has a permission.
     *
     * @param  xuid  The xuid of the player.
     * @param  name  The name of the permission.
     * @return bool  True If the player has the permission, false otherwise.
     * @throws std::invalid_argument  If the permission does not exist.
     * @par Example
     * @code
     * if (Permission::checkPermission(pl->getXuid(), "MyPlugin:destroy")) {
     *     // Do something
     * }
     * @endcode
     */
    static bool checkPermission(std::string const& xuid, std::string const& name) {
        return api.checkPermission(xuid, name);
    }

    /**
     * @brief Check whether a player is member of a role.
     *
     * @param  xuid  The xuid of the player.
     * @param  name  The name of the role.
     * @return bool  True If the player is member of the role, false otherwise.
     * @throws std::invalid_argument  If the role does not exist.
     */
    static bool isMemberOf(std::string const& xuid, std::string const& name) { return api.isMemberOf(xuid, name); }

    /**
     * @brief Get the roles of a player.
     *
     * @param  xuid         The xuid of the player.
     * @return PERM::Roles  The roles of the player.
     */
    static ll::perm::Roles getPlayerRoles(std::string const& xuid) { return api.getPlayerRoles(xuid); }

    /**
     * @brief Get the permissions of a player.
     *
     * @param  xuid               The xuid of the player.
     * @return PERM::Permissions  The permissions of the player.
     */
    static ll::perm::Permissions getPlayerPermissions(std::string const& xuid) {
        return api.getPlayerPermissions(xuid);
    }

    /**
     * @brief Save the data.
     *
     */
    static void saveData() { api.saveData(); }
};
