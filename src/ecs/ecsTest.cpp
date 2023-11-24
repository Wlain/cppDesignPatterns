//
// Created by william on 2023/11/23.
//

/**
 * 实体组件系统(ECS：Entity Component System)是一种主要用于游戏开发的架构模式，ECS 遵循组合优于继承的原则，这意味着每个实体不是由类型层次结构定义的，而是由与其关联的组件定义的。系统在全球范围内对具有所需组件的所有实体起作用
 * 实体：实体代表通用对象。例如，在游戏引擎上下文中，每个粗略游戏对象都表示为一个实体。通常，它仅由一个唯一的 id 组成。实现通常为此使用普通整数。
 * 组件：组件将实体标记为拥有特定方面，并保存对该方面进行建模所需的数据。例如，每个可能受到伤害的游戏对象可能都有与其实体关联的生命值组件。实现通常使用结构、类或关联数组。
 * 系统：系统是一个作用于具有所需组件的所有实体的过程。例如，物理系统可以查询具有质量、速度和位置分量的实体，并且迭代对每个实体的分量集进行物理计算的结果。
 * ECS 使用中的常见设计模式：观察者模式，
 * 组件是简单的数据桶，它们没有依赖关系,ECS架构使用组合而不是继承来组合对象行为。
**/
void ecsTest()
{
}