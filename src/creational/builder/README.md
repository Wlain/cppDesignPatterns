# 建造者设计模式（Builder Pattern）

## 使用场景：
* 当我们想要构造一个复杂的对象时，使用构建器设计模式。但是，我们不希望有一个复杂的构造函数成员或需要许多参数的构造函数成员。
* Builder设计模式一步一步地构造一个复杂的对象，最后一步将返回该对象。构造对象的过程应该是通用的，以便它可以在各种方法的帮助下用于创建同一对象的不同表示

## 建造者设计模式的好处
* 在构建器模式中，代码行数至少增加了一倍。但是在设计灵活性、更少或没有构造函数的参数以及更易读的代码方面，付出的努力得到了回报
* Builder 设计模式还有助于最小化构造函数中的参数数量，因此不需要将 null传递 给构造函数的可选参数
* 可以在对象构建过程中构建不可变对象，而无需太多复杂的逻辑
* 将构造与 对象表示分离 使对象表示切片和精确。将构建器实体分开提供了创建和实例化不同对象表示的灵活性

## 什么时候应该使用构建器设计模式？
* 每当创建新对象需要设置许多参数时，其中一些（或全部）是可选的

## 为什么我们在实现Builder设计模式时需要一个Builder类？
 * 这不是必需的，但这样做有一些好处:
   * 根据SRP，构建对象的关注点应该在单独的实体中 
   * 原始对象不会膨胀
   * 简单且可维护的代码
   * 测试和理解具有许多输入参数的构造函数变得更加复杂
   
## Builder设计模式的最大优势
不使用建造者模式:
   ``` C++
   auto o = new MyClass(5, 5.5, 'A', var, 1000, obj9, "hello");
   ```
使用建造者模式:
   ``` C++
   auto o = MyClass.builder().a(5).b(5.5).c('A').d(var).e(1000).f(obj9).g("hello");
   ```
使用使用建造者之后，获得更具表现力的代码，可以查看哪个数据成员被分配了什么，甚至可以更改分配顺序

## 抽象工厂和构建器设计模式有什么区别？
* Factory批量生产对象，这些对象可以是继承层次结构中的任何对象（如 Point、Point2D、Point3D）。
* 虽然Builder处理仅限于单个对象的对象的实例化。 您会看到Factory是关于批量对象创建的，而构建器是分段对象创建的。
* 在这两种模式中，您都可以在其他类中分离出与对象创建相关的机制