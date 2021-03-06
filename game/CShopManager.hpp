#ifndef __LIBM2_GAME_CSHOPMANAGER_HPP
#define __LIBM2_GAME_CSHOPMANAGER_HPP
#include "CShop.hpp"
#include "../lib/GameSingleton.hpp"
#include "../addr.hpp"
#include "SShopTable.hpp"
namespace libm2{
class CShopManager : public GameSingleton<CShopManager,(unsigned int)Addr::CShopManager::singleton> {
  private:
    std::map<unsigned int, CShop*> m_map_pkShop;
    std::map<unsigned int, CShop*> m_map_pkShopByNPCVnum;
    std::map<unsigned int, CShop*> m_map_pkShopByPC;

  public:
    CShopManager(void);
    ~CShopManager();
    bool Initialize(TShopTable *, int);
    void Destroy(void);
    LPSHOP Get(DWORD);
    LPSHOP GetByNPCVnum(DWORD);
    bool StartShopping(LPCHARACTER, LPCHARACTER, int);
    void StopShopping(LPCHARACTER);
    void Buy(LPCHARACTER, BYTE);
    void Sell(LPCHARACTER, BYTE, BYTE);
    LPSHOP CreatePCShop(LPCHARACTER, TShopItemTable *, BYTE);
    LPSHOP FindPCShop(DWORD);
    void DestroyPCShop(LPCHARACTER);
};

}
#endif // __LIBM2_GAME_CSHOPMANAGER_HPP
