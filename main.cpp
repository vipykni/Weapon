#include <QCoreApplication>
#include "weaponbehavior.h"
#include "swordbehavior.h"
#include "knifebehavior.h"
#include "bowandarrowbehavior.h"
#include "axebehavior.h"
#include "character.h"
#include "king.h"
#include "queen.h"
#include "troll.h"
#include "knight.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

   Character *p = new King();
   p->fight();
   WeaponBehavior *knife = new KnifeBehavior();
   p->setWeapon(knife);
   p->fight();

   Character *q = new Queen();
   q->fight();
   WeaponBehavior *bow = new BowAndArrowBehavior();
   q->setWeapon(bow);
   q->fight();

   Character *t = new Troll();
   t->fight();
   WeaponBehavior *axe = new AxeBehavior();
   t->setWeapon(axe);
   t->fight();

   Character *k = new Knight();
   k->fight();
   WeaponBehavior *sword = new SwordBehavior();
   k->setWeapon(sword);
   k->fight();
    return a.exec();
}
