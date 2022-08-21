#pragma once
#include "Member.hpp"
#include "Permission.hpp"

namespace PERM {

    class Role {

    protected:

        Members members;
        Permissions permissions;

    public:
        enum class Type : char {
            None = 0,
            General = 1,
            Everyone = 2,
            Admin = 3,
            //Custom = 4,
        };

        std::string name;
        std::string displayName;
        int priority = 0;

        static constexpr std::string_view roleNameInvalidChars = "@#[]{}<>()/|\\$%^&*!~`\"\'+=?\n\t\r\f\v ";

        virtual ~Role() {};

        virtual bool hasPermission(const std::string& name) const {
            return this->permissions.contains(name) && this->permissions.at(name).enabled;
        }
        virtual void setPermission(const std::string& name, bool enabled = true, const nlohmann::json& extra = nlohmann::json());

        virtual void removePermission(const std::string& name) {
            this->permissions.remove(name);
        }
        virtual bool permissionExists(const std::string& name) {
            return this->permissions.contains(name);
        }

        virtual bool hasMember(const xuid_t& xuid) const = 0;
        virtual void addMember(const xuid_t& xuid) = 0;
        virtual void removeMember(const xuid_t& xuid) = 0;


        virtual Permissions& getPermissions() {
            return this->permissions;
        }
        virtual Permissions getPermissions() const {
            return this->permissions;
        }
        virtual Members& getMembers() {
            return this->members;
        }
        virtual Members getMembers() const {
            return this->members;
        }
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