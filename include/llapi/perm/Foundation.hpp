/**
 * @file   Foundation.hpp
 * @author LiteLDev (https://github.com/LiteLDev)
 * @brief  Foundation data classes for PermissionAPI
 * 
 * @copyright Copyright (c) 2021-present  LiteLoaderBDS developers and all contributors
 * 
 */
#pragma once
#include "llapi/Global.h"

namespace ll::perm {


    template <typename T>
    class PermVector : public std::vector<T> {

        using Base = std::vector<T>;

    public:
        PermVector()
            : Base() {
        }
        PermVector(const Base& base)
            : Base(base) {
        }
        PermVector(Base&& base)
            : Base(base) {
        }
        PermVector(const PermVector<T>& other) = default;
        PermVector(PermVector<T>&& other) = default;

        bool contains(const T& xuid) const {
            for (auto& member : *this) {
                if (member == xuid) {
                    return true;
                }
            }
            return false;
        }

        size_t count(const T& xuid) const {
            size_t result = 0;
            for (auto& member : *this) {
                if (member == xuid) {
                    result++;
                }
            }
            return result;
        }

        T& push_back(const T& xuid) {
            if (contains(xuid)) {
                throw std::out_of_range("Failed to add the element: the element already exists");
            }
            Base::push_back(xuid);
            return this->back();
        }

        template <typename... Args>
        T& emplace_back(Args&&... args) {
            return this->push_back(T(std::forward<Args>(args)...));
        }

        PermVector<T>& operator=(const Base& other) {
            return (PermVector<T>&)(((Base&)*this) = other);
        }
        PermVector<T>& operator=(const PermVector<T>& other) = default;
        PermVector<T>& operator=(PermVector<T>&& other) = default;
    };


    template <typename T>
    class PermContainer : public std::vector<T> {

        using Base = std::vector<T>;

    public:
        PermContainer()
            : Base() {
        }
        PermContainer(const Base& base)
            : Base(base) {
        }
        PermContainer(Base&& base)
            : Base(base) {
        }
        PermContainer(const PermContainer<T>& other) = default;
        PermContainer(PermContainer<T>&& other) = default;

        bool contains(const std::string& name) const {
            for (auto& el : *this) {
                if (el.name == name) {
                    return true;
                }
            }
            return false;
        }

        typename Base::iterator find(const std::string& name) {
            for (auto it = this->begin(); it != this->end(); it++) {
                if (it->name == name) {
                    return it;
                }
            }
            return this->end();
        }

        typename Base::const_iterator find(const std::string& name) const {
            for (auto it = this->begin(); it != this->end(); it++) {
                if (it->name == name) {
                    return it;
                }
            }
            return this->end();
        }

        size_t count(const std::string& name) const {
            size_t result = 0;
            for (auto& el : *this) {
                if (el.name == name) {
                    result++;
                }
            }
            return result;
        }

        template <typename... Args>
        T& getOrCreate(const std::string& name, Args&&... args) {
            for (auto& el : *this) {
                if (el.name == name) {
                    return el;
                }
            }
            auto& el = this->emplace_back(args...);
            return el;
        }

        T& at(const std::string& name) {
            for (auto& el : *this) {
                if (el.name == name) {
                    return el;
                }
            }
            throw std::out_of_range("Failed to get the element: the element does not exist");
        }
        const T& at(const std::string& name) const {
            for (auto& el : *this) {
                if (el.name == name) {
                    return el;
                }
            }
            throw std::out_of_range("Failed to get the element: the element does not exist");
        }

        T& push_back(const T& el) {
            if (contains(el.name)) {
                throw std::out_of_range("Failed to add the element: the element with the same name already exists");
            }
            Base::push_back(el);
            return this->back();
        }

        template <typename... Args>
        T& emplace_back(Args&&... args) {
            Base::emplace_back(std::forward<Args>(args)...);
            if (count(this->back().name) > 1) {
                this->pop_back();
                throw std::out_of_range("Failed to add the element: the element with the same name already exists");
            }
            return this->back();
        }

        void remove(const std::string& name) {
            for (auto it = this->begin(); it != this->end(); it++) {
                if (it->name == name) {
                    this->erase(it);
                    return;
                }
            }
            throw std::out_of_range("Failed to remove the element: the target element does not exist");
        }

        T& operator[](const std::string& name) {
            T def{};
            def.name = name;
            return this->getOrCreate(name, def);
        }

        PermContainer<T>& operator=(const PermContainer<T>& other) = default;
        PermContainer<T>& operator=(PermContainer<T>&& other) = default;
        PermContainer<T>& operator=(const Base& other) {
            return (PermContainer<T>&)(((Base&)*this) = other);
        }
    };


    template <typename T>
    class PermPtrContainer : public std::vector<std::shared_ptr<T>> {

        using Base = std::vector<std::shared_ptr<T>>;

    public:
        PermPtrContainer()
            : Base() {
        }
        PermPtrContainer(const Base& base)
            : Base(base) {
        }
        PermPtrContainer(Base&& base)
            : Base(base) {
        }
        PermPtrContainer(const PermPtrContainer<T>& other) = default;
        PermPtrContainer(PermPtrContainer<T>&& other) = default;

        bool contains(const std::string& name) const {
            for (auto& el : *this) {
                if (el->name == name) {
                    return true;
                }
            }
            return false;
        }

        typename Base::iterator find(const std::string& name) {
            for (auto it = this->begin(); it != this->end(); it++) {
                if (it->name == name) {
                    return it;
                }
            }
            return this->end();
        }

        typename Base::const_iterator find(const std::string& name) const {
            for (auto it = this->begin(); it != this->end(); it++) {
                if (it->name == name) {
                    return it;
                }
            }
            return this->end();
        }

        size_t count(const std::string& name) const {
            size_t result = 0;
            for (auto& el : *this) {
                if (el->name == name) {
                    result++;
                }
            }
            return result;
        }

        template <typename... Args>
        std::shared_ptr<T>& getOrCreate(const std::string& name, Args&&... args) {
            for (auto& el : *this) {
                if (el->name == name) {
                    return el;
                }
            }
            auto& el = this->emplace_back(args...);
            return el;
        }

        std::shared_ptr<T>& at(const std::string& name) {
            for (auto& el : *this) {
                if (el->name == name) {
                    return el;
                }
            }
            throw std::out_of_range("Failed to get the element: the element does not exist");
        }
        const std::shared_ptr<T>& at(const std::string& name) const {
            for (auto& el : *this) {
                if (el->name == name) {
                    return el;
                }
            }
            throw std::out_of_range("Failed to get the element: the element does not exist");
        }

        T& push_back(const T& el) {
            if (contains(el->name)) {
                throw std::out_of_range("Failed to add the element: the element with the same name already exists");
            }
            Base::push_back(std::make_shared<T>(el));
            return *this->back();
        }
        std::shared_ptr<T>& push_back(const std::shared_ptr<T>& el) {
            if (contains(el->name)) {
                throw std::out_of_range("Failed to add the element: the element with the same name already exists");
            }
            Base::push_back(el);
            return this->back();
        }

        template <typename... Args>
        std::shared_ptr<T>& emplace_back(Args&&... args) {
            Base::emplace_back(std::forward<Args>(args)...);
            if (count(this->back()->name) > 1) {
                this->pop_back();
                throw std::out_of_range("Failed to add the element: the element with the same name already exists");
            }
            return this->back();
        }

        void remove(const std::string& name) {
            for (auto it = this->begin(); it != this->end(); it++) {
                if ((*it)->name == name) {
                    this->erase(it);
                    return;
                }
            }
            throw std::out_of_range("Failed to remove the element: the target element does not exist");
        }

        std::shared_ptr<T>& operator[](const std::string& name) {
            auto def = std::make_shared<T>(new T);
            def->name = name;
            return this->getOrCreate(name, def);
        }

        PermPtrContainer<T>& operator=(const PermPtrContainer<T>& other) = default;
        PermPtrContainer<T>& operator=(PermPtrContainer<T>&& other) = default;
        PermPtrContainer<T>& operator=(const Base& other) {
            return (PermPtrContainer<T>&)(((Base&)*this) = other);
        }
    };

} // namespace PERM