#include "Administrator.h"

//---------------------------------------------------------------------------------------------

Administrator::Administrator(string name) {}

Administrator::~Administrator(void)
{
    sellers.clearContainer();
}

void Administrator::clearSellers(void)
{
    sellers.clearContainer();
}

void Administrator::addSeller(Seller* seller)
{
    sellers.pushBack(seller);
}

void Administrator::addTypeOfFlowers(Seller* typeOfFlowers)
{
    typeFlowers.pushBack(typeOfFlowers);
}


//void Administrator::addProvider(Seller* prov)
//{
//    newProvider.push_back(prov);
//}

int Administrator::deleteSeller(string name)
{
    return sellers.popElement(name);
}

Seller* Administrator::findSeller(string name)
{
    return sellers.findElement(name);
}

const SellerContainer& Administrator::getSellerContainer(void) const
{
    return sellers;
}

const SellerContainer& Administrator::getTypeContainer(void) const
{
    return typeFlowers;
}

void Administrator::sellersToComboBox(ComboBox^ comboBox)
{
    comboBox->Items->Clear();
    for (SellerIterator it(&getSellerContainer()); !it.isEndContainer(); it.nextElement())
        comboBox->Items->Add(gcnew String(it.getIterator()->getName().c_str()));
}

void Administrator::typeOfFlowersToComboBox(ComboBox^ comboBox)
{
    comboBox->Items->Clear();
    for (SellerIterator it(&getTypeContainer()); !it.isEndContainer(); it.nextElement())
        comboBox->Items->Add(gcnew String(it.getIterator()->getTypeOfFlowers().c_str()));
}