#include "user.hpp"

User::User(
    std::string &NAME,
    std::string &EMAIL,

    int AGE,
    size_t ID
):  m_name(std::move(NAME)),
    m_email(std::move(EMAIL)),
    m_age(std::move(AGE)),
    m_id(std::move(ID)){

}
