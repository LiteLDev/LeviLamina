/**
 * @file   Role.hpp
 * @author LiteLDev (https://github.com/LiteLDev)
 * @brief  Role type for PermissionAPI
 * 
 * @copyright Copyright (c) 2021-present  LiteLoaderBDS developers and all contributors
 * 
 */
#pragma once
#include "llapi/perm/Member.hpp"
#include "llapi/perm/Permission.hpp"

namespace ll::perm {


    class Role {

    protected:

        Members members;         ///< Members of the role.
        Permissions permissions; ///< Permissions of the role.

    public:
        /**
         * @brief The type of role.
         * 
         */
        enum class Type : char {
            None = 0,
            General = 1,
            Everyone = 2,
            Admin = 3,
            //Custom = 4,
        };

        std::string name;        ///< Name of the role.
        std::string displayName; ///< Display name of the role.
        int priority = 0;        ///< Priority of the role.

        static constexpr std::string_view roleNameInvalidChars = "@#[]{}<>()/|\\$%^&*!~`\"\'+=?\n\t\r\f\v "; ///< Invalid characters for the role name.

        /**
         * @brief Destructor.
         * 
         */
        virtual ~Role() {};

        /**
         * @brief Check whether the role has the permission.
         * 
         * @param  name  The permission name to check.
         * @return bool  True if the role has the permission, false otherwise.
         */
        virtual bool hasPermission(const std::string& name) const {
            return this->permissions.contains(name) && this->permissions.at(name).enabled;
        }
        /**
         * @brief Set the permission of the role.
         * 
         * @param name     The name of the permission to set.
         * @param enabled  Whether the permission is enabled.
         * @param extra    Extra data for the permission.
         */
        virtual void setPermission(const std::string& name, bool enabled = true, const nlohmann::json& extra = nlohmann::json());

        /**
         * @brief Remove the permission of the role.
         * 
         * @param name  The name of the permission to remove.
         */
        virtual void removePermission(const std::string& name) {
            this->permissions.remove(name);
        }

        /**
         * @brief Check whether the permission exists in the role.
         * 
         * @param  name  The name of the permission to check.
         * @return bool  True if the permission exists in the role, false otherwise.
         */
        virtual bool permissionExists(const std::string& name) {
            return this->permissions.contains(name);
        }

        /**
         * @brief Check whether the role has the member.
         * 
         * @param  xuid  The xuid of the member(player) to check.
         * @return bool  True if the role has the member, false otherwise.
         */
        virtual bool hasMember(const xuid_t& xuid) const = 0;

        /**
         * @brief Add the member to the role.
         * 
         * @param xuid  The xuid of the member(player) to add.
         */
        virtual void addMember(const xuid_t& xuid) = 0;

        /**
         * @brief Remove the member from the role.
         * 
         * @param xuid  The xuid of the member(player) to remove.
         */
        virtual void removeMember(const xuid_t& xuid) = 0;

        /**
         * @brief Get the permissions of the role(non-const).
         * 
         * @return Permissions&  The permissions of the role.
         */
        virtual Permissions& getPermissions() {
            return this->permissions;
        }
        /**
         * @brief Get the permissions of the role(const).
         * 
         * @return const Permissions&  The permissions of the role.
         */
        virtual const Permissions& getPermissions() const {
            return this->permissions;
        }

        /**
         * @brief Get the members of the role(non-const).
         * 
         * @return Members&  The members of the role.
         */
        virtual Members& getMembers() {
            return this->members;
        }
        /**
         * @brief Get the members of the role(const).
         * 
         * @return const Members&  The members of the role.
         */
        virtual const Members& getMembers() const {
            return this->members;
        }

        /**
         * @brief Get the type of the role.
         * 
         * @return Type  The type of the role.
         */
        virtual Type getType() const = 0;

        /**
         * @brief Validate the role data
         *
         * @return bool  True if changed, false otherwise.
         */
        virtual bool validate() {
            if (this->name.find_first_of(Role::roleNameInvalidChars.data()) != std::string::npos) {
                for (auto& ch : this->name) {
                    if (Role::roleNameInvalidChars.find(ch) != std::string::npos) {
                        ch = '-';
                    }
                }
                return true;
            }
            return false;
        }

        /**
         * @brief Check whether the role name is valid.
         * 
         * @param  name  The name to check.
         * @return bool  True if the role name is valid, false otherwise.
         */
        static bool isValidRoleName(const std::string& name) {
            return name.find_first_of(Role::roleNameInvalidChars.data()) == std::string::npos;
        }
    };


    class GeneralRole : public Role {

        using Base = Role;

    public:

        GeneralRole() = default;
        GeneralRole(const GeneralRole& other) = default;
        GeneralRole(GeneralRole&& other) = default;
        ~GeneralRole() = default;

        GeneralRole& operator=(const GeneralRole& other) = default;
        GeneralRole& operator=(GeneralRole&& other) = default;

        virtual bool hasMember(const xuid_t& xuid) const {
            return this->members.contains(xuid);
        }
        virtual void addMember(const xuid_t& xuid) {
            this->members.push_back(xuid);
        }
        virtual void removeMember(const xuid_t& xuid) {
            this->members.erase(std::remove(this->members.begin(), this->members.end(), xuid), this->members.end());
        }

        virtual Type getType() const {
            return Type::General;
        }
    };


    class EveryoneRole : public Role {

        using Base = Role;

    public:

        EveryoneRole() = default;
        EveryoneRole(const EveryoneRole& other) = default;
        EveryoneRole(EveryoneRole&& other) = default;
        ~EveryoneRole() = default;

        EveryoneRole& operator=(const EveryoneRole& other) = default;
        EveryoneRole& operator=(EveryoneRole&& other) = default;

        virtual bool hasMember(const xuid_t& xuid) const {
            return true;
        }
        virtual void addMember(const xuid_t& xuid) {
            throw std::runtime_error("You cannot add a member to a everyone permission role");
        }
        virtual void removeMember(const xuid_t& xuid) {
            throw std::runtime_error("You cannot remove a member from a everyone permission role");
        }

        virtual Type getType() const {
            return Type::Everyone;
        }
    };


    class AdminRole : public Role {

        using Base = Role;

    public:

        AdminRole() = default;
        AdminRole(const AdminRole& other) = default;
        AdminRole(AdminRole&& other) = default;
        ~AdminRole() = default;

        AdminRole& operator=(const AdminRole& other) = default;
        AdminRole& operator=(AdminRole&& other) = default;

        virtual bool hasPermission(const std::string& name) const {
            if (!this->permissions.contains(name)) {
                return true;
            } else {
                return this->permissions.at(name).enabled;
            }
        }

        virtual bool hasMember(const xuid_t& xuid) const {
            return this->members.contains(xuid);
        }
        virtual void addMember(const xuid_t& xuid) {
            this->members.push_back(xuid);
        }
        virtual void removeMember(const xuid_t& xuid) {
            this->members.erase(std::remove(this->members.begin(), this->members.end(), xuid), this->members.end());
        }

        virtual Type getType() const {
            return Type::Admin;
        }
    };


    class Roles : public PermPtrContainer<Role> {

        using Base = PermPtrContainer<Role>;

    public:
        Roles()
            : Base() {
        }
        Roles(const Base& base)
            : Base(base) {
        }
        Roles(Base&& base)
            : Base(base) {
        }
        Roles(const Roles& other) = default;
        Roles(Roles&& other) = default;

        /**
         * @brief Sort the roles by priority.
         * 
         * @param  greater  Greater or less.
         * @return Roles    The sorted roles.
         */
        Roles sortByPriority(bool greater = false) const {
            Roles result;
            for (auto& role : *this) {
                result.push_back(role);
            }
            std::sort(result.begin(), result.end(),
                      [greater](const std::shared_ptr<Role>& a, const std::shared_ptr<Role>& b) {
                          return greater ? a->priority > b->priority : a->priority < b->priority;
                      });
            return result;
        }

        std::shared_ptr<Role>& operator[](const std::string& name) {
            Role* ptr = nullptr;
            if (name == "everyone")
                ptr = new EveryoneRole;
            else if (name == "admin")
                ptr = new AdminRole;
            else
                ptr = new GeneralRole;
            auto def = std::shared_ptr<Role>(ptr);
            def->name = name;
            return this->getOrCreate(name, def);
        }

        Roles& operator=(const Roles& other) = default;
        Roles& operator=(Roles&& other) = default;
        Roles& operator=(const Base& other) {
            return (Roles&)((Base&)*this) = other;
        }
    };

} // namespace PERM