#include "Seller.h"


//SellerContainer::SellerContainer() : back(NULL), front(NULL) {} //����������� ��� ����������
//
//SellerContainer::~SellerContainer()
//{
//    this->clear();
//}
//
//void SellerContainer::push_back(Seller* obj) //�������� ������� � ����� �������
//{
//    SellerElem* temp = new SellerElem;
//
//    temp->data = obj; //����������� ������ �������� �������� ���������
//    temp->prev = NULL; //
//
//    if (!this->back) //���� �� �����
//    {
//        this->back = this->front = temp; //������� ������� �� ������ �������� temp
//        temp->next = NULL; //��������� �� ��������� ������� ������� � 1 ��
//    }
//    else //���� ������� �� ������� �� 1 ��������
//    {
//        temp->next = this->back; //
//        this->back->prev = temp;
//        this->back = temp;
//    }
//}
//
//Seller* SellerContainer::pop_back(void) //������� ��������� �������
//{
//    if (!this->back) //���� ������� ������ - ���������� ��������� �� �����������
//        return NULL;
//
//    if (!this->back->next) //���� ������� ������� �� 1 ��������
//    {
//        Seller* out = this->back->data;
//        delete this->back; //������� ���������
//
//        this->back = this->front = NULL;
//        return out;
//    }
//    SellerElem* del = this->back;
//    Seller* out = this->back->data;
//    this->back = this->back->next;
//    delete del;
//    this->back->prev = NULL;
//    return out;
//}
//
////bool SellerContainer::pop(string name) //�������� �������� � �������� ���������
////{
////    SellerElem* tempObject = this->back; //������������ ��������� ���������� ��������� ������� �������
////    while (tempObject)
////        if (tempObject->data->getName() == name)
////        {
////            SellerElem* del = tempObject;
////            if (tempObject->prev)
////                tempObject->prev->next = tempObject->next;
////            if (tempObject->next)
////                tempObject->next = tempObject->prev;
////            delete del->data;
////            delete del;
////            return true;
////        }
////        else
////            tempObject = tempObject->next;
////    return false;
////}
//
//bool SellerContainer::pop(string name)//�������� �������� � �������� ���������
//{
//    SellerElem* tempObject = this->back; //������������ ��������� ���������� ���������
//    while (tempObject)
//        if (tempObject->data->getName() == name)
//        {
//            if (!(this->back->next || this->back->prev))
//                this->back = NULL;
//            if (tempObject->prev)
//                tempObject->prev->next = tempObject->next;
//            if (tempObject->next)
//                tempObject->next->prev = tempObject->prev;
//            if (tempObject == this->back)
//                this->back = tempObject->next;
//            delete tempObject->data;
//            delete tempObject;
//            return true;
//        }
//        else
//            tempObject = tempObject->next;
//    return false;
//}
//
//void SellerContainer::clear(void)
//{
//    while (this->back)
//        delete this->pop_back();
//}
//
//Seller* SellerContainer::find(string name)//����� �� �������� ���������
//{
//    SellerElem* tempObject = this->back;
//    while (tempObject)
//        if (tempObject->data->getName() == name)
//            return tempObject->data;
//        else
//            tempObject = tempObject->next;
//    return NULL;
//}
//
//SellerContainerIterator::SellerContainerIterator(const SellerContainer* obj) : obj(obj), iter(obj->back) {}
//
//SellerElem* SellerContainerIterator::begin(void) //
//{
//    return obj->back;
//}
//
//Seller* SellerContainerIterator::getIter(void) //������� ����������
//{
//    return iter->data;
//}
//
//bool SellerContainerIterator::isEnd(void) //�������� �� ����� �������
//{
//    return iter == NULL;
//}
//
//void SellerContainerIterator::next(void) //������� ��� �������� � ���������� ��������
//{
//    iter = iter->next;
//}
////---------------------------------------------------------------------------------------------

//---------------------------------------------------------------------------------------------

Seller::Seller(void) : SellerName(""), typeOfFlowers(0) {}

Seller::Seller(string name, string typeOfFlowers) : SellerName(name), typeOfFlowers(typeOfFlowers) {}

Seller::~Seller(void)
{
    flowers.clearContainer();
}

//---------------------------------------------------------------------------------------------

string Seller::getName(void) const
{
    return name;
}

//---------------------------------------------------------------------------------------------

string Seller::getTypeOfFlowers(void) const
{
    return typeOfFlowers;
}

//---------------------------------------------------------------------------------------------

void Seller::setTypeOfFlowers(const string typeOfFlowers)
{
    this->typeOfFlowers = typeOfFlowers;
}

//---------------------------------------------------------------------------------------------

void Seller::addFlowers(Flowers* flow)
{
    flowers.pushBack(flow);
}

//---------------------------------------------------------------------------------------------

//void Seller::addProvider(Provider* prov)
//{
//    provider.push_back(prov);
//}

int Seller::deleteFlowers(string flow)
{
    return flowers.popElement(flow);
}

//---------------------------------------------------------------------------------------------

Flowers* Seller::findFlowers(string flow)
{
    return flowers.findElement(flow);
}

//---------------------------------------------------------------------------------------------

const FlowersContainer& Seller::getFlowersContainer(void) const
{
    return flowers;
}

//---------------------------------------------------------------------------------------------

void Seller::flowersToComboBox(ComboBox^ comboBox)
{
    comboBox->Items->Clear();
    for (FlowersIterator it(&getFlowersContainer()); !it.isEndContainer(); it.nextElement())
        comboBox->Items->Add(gcnew String(it.getIterator()->getName().c_str()));
}

//---------------------------------------------------------------------------------------------

SellerName::SellerName(string name) : name(name) {}

//---------------------------------------------------------------------------------------------

//Rukovoditel::Rukovoditel(string name) {}
//
//Rukovoditel::~Rukovoditel(void)
//{
//    sellers.clear();
//}
//
//void Rukovoditel::clearSellers(void)
//{
//    sellers.clear();
//}
//
//void Rukovoditel::addSeller(Seller* seller)
//{
//    sellers.push_back(seller);
//}
//
//void Rukovoditel::addTypeOfFlowers(Seller* typeOfFlowers)
//{
//    typeFlowers.push_back(typeOfFlowers);
//}
//
////void Rukovoditel::addProvider(Seller* prov)
////{
////    newProvider.push_back(prov);
////}
//
//int Rukovoditel::deleteSeller(string name)
//{
//    return sellers.pop(name);
//}
//
//Seller* Rukovoditel::findSeller(string name)
//{
//    return sellers.find(name);
//}
//
//const SellerContainer& Rukovoditel::getSellerContainer(void) const
//{
//    return sellers;
//}
//
//const SellerContainer& Rukovoditel::getTypeContainer(void) const
//{
//    return typeFlowers;
//}
//
//void Rukovoditel::sellersToComboBox(ComboBox^ comboBox)
//{
//    comboBox->Items->Clear();
//    for (SellerContainerIterator it(&getSellerContainer()); !it.isEnd(); it.next())
//        comboBox->Items->Add(gcnew String(it.getIter()->getName().c_str()));
//}
//
//void Rukovoditel::typeOfFlowersToComboBox(ComboBox^ comboBox)
//{
//    comboBox->Items->Clear();
//    for (SellerContainerIterator it(&getTypeContainer()); !it.isEnd(); it.next())
//        comboBox->Items->Add(gcnew String(it.getIter()->getTypeOfFlowers().c_str()));
//}