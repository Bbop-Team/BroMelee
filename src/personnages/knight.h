#pragma once

#include "personnage.h"
#include "perso_info.h"

class Knight : public Personnage
{
public: 
        Knight();

        void rebuildCollisionBox() override;

        int getPercentageToApply() override;

        /**
         * @brief Methode purement virtuelle qui définissent comment le personnage agit selon son etat
         */
        //////////////////////////////////////
        void Dash(double delta_time_) override;
        void Jump(double delta_time_) override;
        void Attack(double delta_time_) override;
        void Light_attack(double delta_time_) override;
        void Hit(double delta_time_) override;
        const perso_info &getInfo() override;
        //////////////////////////////////////
};
