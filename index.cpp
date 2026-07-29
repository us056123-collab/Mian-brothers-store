<!DOCTYPE html>
<html lang="en" class="scroll-smooth">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Mian-Brothers | Freshness & Trust Brought to Your Doorstep</title>

  <!-- [Performance]: CDN Tailwind CSS for instant lightweight rendering -->
  <script src="https://cdn.tailwindcss.com"></script>
  <!-- FontAwesome for semantic accessibility icons -->
  <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.4.0/css/all.min.css">

  <script>
    tailwind.config = {
      theme: {
        extend: {
          colors: {
            brand: {
              DEFAULT: '#059669', // Emerald Green - Freshness & Organic feel
              dark: '#047857',
              light: '#ECFDF5',
              accent: '#F59E0B' // Amber - Sale badges & ratings
            }
          }
        }
      }
    }
  </script>
</head>
<body class="bg-slate-50 text-slate-900 font-sans flex flex-col min-h-screen antialiased">

  <!-- ==========================================
       1. TOP ANNOUNCEMENT BAR (Urgency & Trust)
       ========================================== -->
  <div class="bg-brand-dark text-white text-xs md:text-sm py-2 px-4 text-center font-medium flex justify-between items-center max-w-full">
    <div class="container mx-auto flex justify-between items-center">
      <span><i class="fa-solid fa-truck-fast mr-2"></i> Free Same-Day Delivery on orders over $35 in Lahore</span>
      <span class="hidden md:inline"><i class="fa-solid fa-phone mr-1"></i> Support: +92 300 1234567</span>
    </div>
  </div>

  <!-- ==========================================
       2. HEADER & NAVIGATION (Clear Navigation)
       ========================================== -->
  <!-- [Engineering]: Sticky Header for immediate accessibility anywhere on page -->
  <header class="sticky top-0 z-40 bg-white shadow-sm border-b border-slate-100">
    <div class="container mx-auto px-4 py-3 flex items-center justify-between gap-4">
      
      <!-- Brand Logo & Tagline -->
      <a href="#" class="flex items-center gap-2 text-decoration-none group" aria-label="Mian-Brothers Home">
        <div class="w-10 h-10 bg-brand text-white rounded-xl flex items-center justify-center text-xl font-bold group-hover:bg-brand-dark transition">
          MB
        </div>
        <div>
          <span class="text-xl font-black tracking-tight text-slate-900 block leading-none">Mian-Brothers</span>
          <span class="text-[10px] font-semibold tracking-wide text-brand uppercase block mt-0.5">Fresh Grocery</span>
        </div>
      </a>

      <!-- [UX]: Centralized Search Bar with Dynamic Filtering -->
      <div class="hidden md:flex flex-1 max-w-lg relative">
        <input 
          type="text" 
          id="searchInput" 
          placeholder="Search fresh apples, organic milk, bakery..." 
          class="w-full pl-10 pr-4 py-2 bg-slate-100 border border-transparent rounded-full text-sm focus:outline-none focus:bg-white focus:border-brand transition"
          aria-label="Search groceries"
        />
        <i class="fa-solid fa-magnifying-glass absolute left-3.5 top-3 text-slate-400 text-sm"></i>
      </div>

      <!-- Navigation Actions & Cart Trigger -->
      <div class="flex items-center gap-4">
        <button class="hidden sm:flex items-center gap-2 text-sm font-semibold text-slate-700 hover:text-brand transition">
          <i class="fa-solid fa-user text-slate-500"></i> Account
        </button>

        <!-- [State Management]: Cart Button with Live Counter Badge -->
        <button 
          id="cartBtn" 
          onclick="toggleCart()" 
          class="relative bg-brand-light hover:bg-emerald-100 text-brand font-bold p-2.5 px-4 rounded-full flex items-center gap-2 transition"
          aria-label="View Shopping Cart"
        >
          <i class="fa-solid fa-basket-shopping text-lg"></i>
          <span class="hidden sm:inline text-sm">Cart</span>
          <span id="cartCount" class="bg-brand text-white text-xs font-black rounded-full px-2 py-0.5 min-w-[20px] text-center">0</span>
        </button>
      </div>

    </div>
  </header>

  <main class="flex-grow">
    
    <!-- ==========================================
         3. HERO SECTION (Visual Hierarchy & CTA)
         ========================================== -->
    <section class="bg-gradient-to-r from-emerald-900 via-emerald-800 to-slate-900 text-white py-12 md:py-20 relative overflow-hidden">
      <!-- Background Decorative Blur -->
      <div class="absolute -right-20 -top-20 w-96 h-96 bg-emerald-500/20 rounded-full blur-3xl pointer-events-none"></div>

      <div class="container mx-auto px-4 grid md:grid-cols-2 gap-8 items-center relative z-10">
        <div>
          <span class="inline-block bg-brand-accent text-slate-900 text-xs font-bold uppercase tracking-wider px-3 py-1 rounded-full mb-4">
            100% Organic & Farm Fresh
          </span>
          <!-- [Visual Hierarchy]: Huge H1 for main value proposition -->
          <h1 class="text-3xl md:text-5xl font-extrabold tracking-tight leading-tight mb-4">
            Farm Fresh Groceries Delivered To Your Kitchen
          </h1>
          <p class="text-slate-200 text-base md:text-lg mb-8 max-w-xl">
            Skip the market crowds. Order daily essentials, handpicked vegetables, and premium dairy directly from Mian-Brothers with guaranteed 2-hour delivery.
          </p>
          
          <!-- [Call To Action]: High contrast CTA button -->
          <div class="flex flex-wrap gap-4">
            <a href="#products" class="bg-brand hover:bg-brand-dark text-white font-bold px-7 py-3.5 rounded-xl shadow-lg hover:shadow-emerald-900/40 transition transform active:scale-95 inline-flex items-center gap-2">
              <span>Shop Fresh Now</span>
              <i class="fa-solid fa-arrow-right text-sm"></i>
            </a>
            <a href="#features" class="bg-white/10 hover:bg-white/20 text-white font-semibold px-6 py-3.5 rounded-xl transition border border-white/20">
              Why Choose Us
            </a>
          </div>
        </div>

        <!-- Hero Image -->
        <div class="hidden md:block text-center">
          <img 
            src="https://images.unsplash.com/photo-1542838132-92c53300491e?auto=format&fit=crop&w=800&q=80" 
            alt="Fresh grocery basket filled with vegetables" 
            class="rounded-3xl shadow-2xl object-cover max-h-[380px] w-full border-4 border-white/10"
            loading="eager"
          />
        </div>
      </div>
    </section>

    <!-- ==========================================
         4. TRUST BADGES / FEATURES (Engaging Content)
         ========================================== -->
    <section id="features" class="py-8 bg-white border-b border-slate-100">
      <div class="container mx-auto px-4 grid grid-cols-2 lg:grid-cols-4 gap-6">
        
        <div class="flex items-center gap-4 p-4 rounded-xl bg-slate-50">
          <div class="w-12 h-12 bg-emerald-100 text-brand rounded-full flex items-center justify-center text-xl shrink-0">
            <i class="fa-solid fa-bolt"></i>
          </div>
          <div>
            <h4 class="font-bold text-slate-900 text-sm">2-Hour Delivery</h4>
            <p class="text-xs text-slate-500">Fast home delivery</p>
          </div>
        </div>

        <div class="flex items-center gap-4 p-4 rounded-xl bg-slate-50">
          <div class="w-12 h-12 bg-emerald-100 text-brand rounded-full flex items-center justify-center text-xl shrink-0">
            <i class="fa-solid fa-leaf"></i>
          </div>
          <div>
            <h4 class="font-bold text-slate-900 text-sm">100% Fresh & Organic</h4>
            <p class="text-xs text-slate-500">Sourced directly from farms</p>
          </div>
        </div>

        <div class="flex items-center gap-4 p-4 rounded-xl bg-slate-50">
          <div class="w-12 h-12 bg-emerald-100 text-brand rounded-full flex items-center justify-center text-xl shrink-0">
            <i class="fa-solid fa-shield-halved"></i>
          </div>
          <div>
            <h4 class="font-bold text-slate-900 text-sm">Quality Guaranteed</h4>
            <p class="text-xs text-slate-500">Easy refund or replacement</p>
          </div>
        </div>

        <div class="flex items-center gap-4 p-4 rounded-xl bg-slate-50">
          <div class="w-12 h-12 bg-emerald-100 text-brand rounded-full flex items-center justify-center text-xl shrink-0">
            <i class="fa-solid fa-tags"></i>
          </div>
          <div>
            <h4 class="font-bold text-slate-900 text-sm">Best Local Prices</h4>
            <p class="text-xs text-slate-500">Daily offers & discounts</p>
          </div>
        </div>

      </div>
    </section>

    <!-- ==========================================
         5. PRODUCT CATALOG & CATEGORY FILTERING
         ========================================== -->
    <section id="products" class="py-12 container mx-auto px-4">
      
      <!-- Section Title & Filter Tabs -->
      <div class="flex flex-col md:flex-row md:items-end justify-between mb-8 gap-4">
        <div>
          <h2 class="text-2xl md:text-3xl font-extrabold text-slate-900 tracking-tight">Explore Fresh Essentials</h2>
          <p class="text-slate-500 text-sm mt-1">Handpicked quality products available today</p>
        </div>

        <!-- [UX]: Filter Buttons -->
        <div class="flex items-center gap-2 overflow-x-auto pb-2 scrollbar-none">
          <button onclick="filterCategory('all')" class="cat-btn active bg-brand text-white font-semibold text-xs px-4 py-2 rounded-full transition shrink-0">All</button>
          <button onclick="filterCategory('vegetables')" class="cat-btn bg-slate-200 hover:bg-slate-300 text-slate-700 font-semibold text-xs px-4 py-2 rounded-full transition shrink-0">Vegetables</button>
          <button onclick="filterCategory('fruits')" class="cat-btn bg-slate-200 hover:bg-slate-300 text-slate-700 font-semibold text-xs px-4 py-2 rounded-full transition shrink-0">Fruits</button>
          <button onclick="filterCategory('dairy')" class="cat-btn bg-slate-200 hover:bg-slate-300 text-slate-700 font-semibold text-xs px-4 py-2 rounded-full transition shrink-0">Dairy & Eggs</button>
          <button onclick="filterCategory('bakery')" class="cat-btn bg-slate-200 hover:bg-slate-300 text-slate-700 font-semibold text-xs px-4 py-2 rounded-full transition shrink-0">Bakery</button>
        </div>
      </div>

      <!-- [Responsiveness]: All-screen Friendly Grid (1 col phone, 2 tablet, 4 desktop) -->
      <div id="productGrid" class="grid grid-cols-1 sm:grid-cols-2 lg:grid-cols-4 gap-6">
        <!-- Rendered dynamically via JavaScript for live interactivity -->
      </div>

    </section>

  </main>

  <!-- ==========================================
       6. SLIDE-OVER CART DRAWER (State UI)
       ========================================== -->
  <div id="cartDrawer" class="fixed inset-0 z-50 pointer-events-none">
    <!-- Backdrop -->
    <div id="cartBackdrop" onclick="toggleCart()" class="absolute inset-0 bg-slate-900/50 opacity-0 transition-opacity duration-300"></div>

    <!-- Panel -->
    <aside id="cartPanel" class="absolute right-0 top-0 bottom-0 w-full max-w-md bg-white shadow-2xl transform translate-x-full transition-transform duration-300 pointer-events-auto flex flex-col">
      <div class="p-4 border-b border-slate-100 flex items-center justify-between bg-slate-50">
        <h3 class="font-bold text-slate-900 text-lg flex items-center gap-2">
          <i class="fa-solid fa-basket-shopping text-brand"></i> Your Order
        </h3>
        <button onclick="toggleCart()" class="text-slate-400 hover:text-slate-600 p-2" aria-label="Close cart">
          <i class="fa-solid fa-xmark text-xl"></i>
        </button>
      </div>

      <!-- Cart Items List -->
      <div id="cartItemsList" class="flex-grow overflow-y-auto p-4 space-y-4">
        <p class="text-slate-400 text-center py-12 text-sm">Your basket is empty right now.</p>
      </div>

      <!-- Cart Footer & Checkout CTA -->
      <div class="p-4 border-t border-slate-100 bg-slate-50 space-y-3">
        <div class="flex justify-between items-center text-sm font-semibold text-slate-600">
          <span>Subtotal</span>
          <span id="subtotalAmount" class="text-slate-900 font-bold">$0.00</span>
        </div>
        <div class="flex justify-between items-center text-sm font-semibold text-slate-600">
          <span>Delivery Fee</span>
          <span class="text-brand font-bold">FREE</span>
        </div>
        <div class="flex justify-between items-center text-base font-extrabold text-slate-900 pt-2 border-t border-slate-200">
          <span>Total Amount</span>
          <span id="totalAmount" class="text-brand text-xl">$0.00</span>
        </div>

        <button onclick="alert('Thank you for shopping with Mian-Brothers! Your order is placed.')" class="w-full bg-brand hover:bg-brand-dark text-white font-bold py-3.5 rounded-xl transition flex items-center justify-center gap-2 shadow-md">
          <span>Proceed to Checkout</span>
          <i class="fa-solid fa-lock text-xs opacity-80"></i>
        </button>
      </div>
    </aside>
  </div>

  <!-- Toast Feedback Notification -->
  <div id="toast" class="fixed bottom-6 left-1/2 -translate-x-1/2 bg-slate-900 text-white px-5 py-3 rounded-full shadow-2xl text-sm font-medium opacity-0 pointer-events-none transition-all duration-300 z-50 flex items-center gap-2">
    <i class="fa-solid fa-circle-check text-brand"></i>
    <span id="toastMsg">Item added to cart</span>
  </div>

  <!-- ==========================================
       7. FOOTER (Trust, SEO, & Clear Links)
       ========================================== -->
  <footer class="bg-slate-900 text-slate-400 py-12 border-t border-slate-800 mt-12">
    <div class="container mx-auto px-4 grid grid-cols-1 md:grid-cols-4 gap-8 mb-8">
      
      <div>
        <div class="flex items-center gap-2 text-white font-bold text-xl mb-3">
          <div class="w-8 h-8 bg-brand text-white rounded-lg flex items-center justify-center text-sm">MB</div>
          Mian-Brothers
        </div>
        <p class="text-xs leading-relaxed text-slate-400">
          Mian-Brothers is your premier neighborhood online grocery market in Lahore. Fresh produce, daily essentials, and family care delivered fast.
        </p>
      </div>

      <div>
        <h4 class="text-white font-bold text-sm mb-3">Categories</h4>
        <ul class="space-y-2 text-xs">
          <li><a href="#" class="hover:text-brand transition">Fresh Organic Vegetables</a></li>
          <li><a href="#" class="hover:text-brand transition">Farm Fruits</a></li>
          <li><a href="#" class="hover:text-brand transition">Dairy & Eggs</a></li>
          <li><a href="#" class="hover:text-brand transition">Artisan Bakery</a></li>
        </ul>
      </div>

      <div>
        <h4 class="text-white font-bold text-sm mb-3">Customer Care</h4>
        <ul class="space-y-2 text-xs">
          <li><a href="#" class="hover:text-brand transition">Help & FAQs</a></li>
          <li><a href="#" class="hover:text-brand transition">Delivery Options</a></li>
          <li><a href="#" class="hover:text-brand transition">Return Policy</a></li>
          <li><a href="#" class="hover:text-brand transition">Contact Us</a></li>
        </ul>
      </div>

      <div>
        <h4 class="text-white font-bold text-sm mb-3">Stay Updated</h4>
        <p class="text-xs mb-3">Subscribe for weekly discounts & farm fresh deals.</p>
        <form onsubmit="event.preventDefault(); showToast('Subscribed to Mian-Brothers newsletter!')" class="flex gap-2">
          <input type="email" placeholder="Your email..." required class="bg-slate-800 border border-slate-700 rounded-lg px-3 py-2 text-xs text-white focus:outline-none focus:border-brand flex-grow" />
          <button type="submit" class="bg-brand hover:bg-brand-dark text-white text-xs font-bold px-3 py-2 rounded-lg transition">Join</button>
        </form>
      </div>

    </div>

    <div class="container mx-auto px-4 pt-6 border-t border-slate-800 text-center text-xs text-slate-500">
      &copy; 2026 Mian-Brothers Grocery Store. All rights reserved. Designed for practical engineering learning.
    </div>
  </footer>

  <!-- ==========================================
       8. JAVASCRIPT STATE & LOGIC
       ========================================== -->
  <script>
    // Product Dataset (Simulating backend database payload)
    const products = [
      { id: 1, name: 'Organic Fresh Spinach', category: 'vegetables', price: 1.49, unit: 'bundle', image: 'https://images.unsplash.com/photo-1576045057995-568f588f82fb?w=400&auto=format&fit=crop&q=80', badge: 'Farm Fresh' },
      { id: 2, name: 'Red Gala Apples', category: 'fruits', price: 2.99, unit: 'lb', image: 'https://images.unsplash.com/photo-1560806887-1e4cd0b6cbd6?w=400&auto=format&fit=crop&q=80', badge: 'Popular' },
      { id: 3, name: 'Pure Farm Milk', category: 'dairy', price: 3.49, unit: '1 Gallon', image: 'https://images.unsplash.com/photo-1550583724-b2692b85b150?w=400&auto=format&fit=crop&q=80', badge: 'Local' },
      { id: 4, name: 'Fresh Whole Wheat Bread', category: 'bakery', price: 2.29, unit: 'loaf', image: 'https://images.unsplash.com/photo-1509440159596-0249088772ff?w=400&auto=format&fit=crop&q=80', badge: 'Fresh Daily' },
      { id: 5, name: 'Fresh Hass Avocados', category: 'fruits', price: 3.99, unit: 'pack of 3', image: 'https://images.unsplash.com/photo-1523049673857-eb18f1d7b578?w=400&auto=format&fit=crop&q=80', badge: 'Sale' },
      { id: 6, name: 'Organic Tomatoes', category: 'vegetables', price: 1.99, unit: 'lb', image: 'https://images.unsplash.com/photo-1592924357228-91a4daadcfea?w=400&auto=format&fit=crop&q=80', badge: 'Organic' },
      { id: 7, name: 'Brown Farm Eggs', category: 'dairy', price: 4.19, unit: '12 pcs', image: 'https://images.unsplash.com/photo-1516448620398-c5f44bf9f441?w=400&auto=format&fit=crop&q=80', badge: 'High Protein' },
      { id: 8, name: 'Butter Croissants', category: 'bakery', price: 4.99, unit: '4 pcs', image: 'https://images.unsplash.com/photo-1555507036-ab1f4038808a?w=400&auto=format&fit=crop&q=80', badge: 'Artisan' }
    ];

    let cart = [];

    // Render Products to DOM
    function renderProducts(items) {
      const grid = document.getElementById('productGrid');
      grid.innerHTML = items.map(p => `
        <article class="bg-white rounded-2xl border border-slate-100 p-4 shadow-sm hover:shadow-md transition group flex flex-col justify-between">
          <div>
            <div class="relative overflow-hidden rounded-xl mb-3 aspect-square bg-slate-100">
              <span class="absolute top-2 left-2 z-10 bg-brand-light text-brand text-[10px] font-bold uppercase px-2 py-1 rounded-md">
                ${p.badge}
              </span>
              <img 
                src="${p.image}" 
                alt="${p.name}" 
                loading="lazy"
                class="w-full h-full object-cover group-hover:scale-105 transition duration-300"
              />
            </div>
            <span class="text-[11px] font-bold uppercase tracking-wider text-slate-400 block mb-1">${p.category}</span>
            <h3 class="font-bold text-slate-900 text-base mb-1 group-hover:text-brand transition">${p.name}</h3>
            <p class="text-xs text-slate-500 mb-3 font-medium">Per ${p.unit}</p>
          </div>

          <div class="flex items-center justify-between pt-3 border-t border-slate-100 mt-2">
            <div>
              <span class="text-xl font-black text-slate-900">$${p.price.toFixed(2)}</span>
            </div>
            
            <!-- [Accessibility & CTA]: Interactive Add to Cart button -->
            <button 
              onclick="addToCart(${p.id})" 
              aria-label="Add ${p.name} to cart"
              class="bg-brand hover:bg-brand-dark text-white font-bold p-2.5 px-3.5 rounded-xl transition active:scale-90 flex items-center gap-1.5 text-xs shadow-sm"
            >
              <i class="fa-solid fa-plus"></i>
              <span>Add</span>
            </button>
          </div>
        </article>
      `).join('');
    }

    // Category Filter Handler
    function filterCategory(cat) {
      document.querySelectorAll('.cat-btn').forEach(btn => {
        btn.classList.remove('bg-brand', 'text-white');
        btn.classList.add('bg-slate-200', 'text-slate-700');
      });
      event.target.classList.remove('bg-slate-200', 'text-slate-700');
      event.target.classList.add('bg-brand', 'text-white');

      if (cat === 'all') {
        renderProducts(products);
      } else {
        renderProducts(products.filter(p => p.category === cat));
      }
    }

    // Search Filter
    document.getElementById('searchInput').addEventListener('input', (e) => {
      const query = e.target.value.toLowerCase();
      const filtered = products.filter(p => p.name.toLowerCase().includes(query) || p.category.toLowerCase().includes(query));
      renderProducts(filtered);
    });

    // Add To Cart State Logic
    function addToCart(productId) {
      const item = products.find(p => p.id === productId);
      const existing = cart.find(c => c.id === productId);

      if (existing) {
        existing.qty += 1;
      } else {
        cart.push({ ...item, qty: 1 });
      }

      updateCartUI();
      showToast(`Added "${item.name}" to cart!`);
    }

    // Update Cart UI, Total, and Counter
    function updateCartUI() {
      const cartCount = document.getElementById('cartCount');
      const cartItemsList = document.getElementById('cartItemsList');
      const subtotalAmount = document.getElementById('subtotalAmount');
      const totalAmount = document.getElementById('totalAmount');

      const totalItemsCount = cart.reduce((sum, item) => sum + item.qty, 0);
      cartCount.innerText = totalItemsCount;

      const subtotal = cart.reduce((sum, item) => sum + (item.price * item.qty), 0);
      subtotalAmount.innerText = `$${subtotal.toFixed(2)}`;
      totalAmount.innerText = `$${subtotal.toFixed(2)}`;

      if (cart.length === 0) {
        cartItemsList.innerHTML = `<p class="text-slate-400 text-center py-12 text-sm">Your basket is empty right now.</p>`;
        return;
      }

      cartItemsList.innerHTML = cart.map(item => `
        <div class="flex items-center gap-3 p-3 bg-slate-50 rounded-xl border border-slate-100">
          <img src="${item.image}" alt="${item.name}" class="w-14 h-14 object-cover rounded-lg">
          <div class="flex-grow">
            <h4 class="font-bold text-slate-800 text-sm">${item.name}</h4>
            <span class="text-xs text-slate-500 font-semibold">$${item.price.toFixed(2)} × ${item.qty}</span>
          </div>
          <div class="flex items-center gap-2">
            <button onclick="changeQty(${item.id}, -1)" class="w-6 h-6 bg-white border border-slate-200 rounded text-xs font-bold hover:bg-slate-100">-</button>
            <span class="text-xs font-bold">${item.qty}</span>
            <button onclick="changeQty(${item.id}, 1)" class="w-6 h-6 bg-white border border-slate-200 rounded text-xs font-bold hover:bg-slate-100">+</button>
          </div>
        </div>
      `).join('');
    }

    function changeQty(id, delta) {
      const item = cart.find(c => c.id === id);
      if (!item) return;
      item.qty += delta;
      if (item.qty <= 0) {
        cart = cart.filter(c => c.id !== id);
      }
      updateCartUI();
    }

    // Cart Drawer Toggle
    function toggleCart() {
      const backdrop = document.getElementById('cartBackdrop');
      const panel = document.getElementById('cartPanel');
      
      const isOpen = panel.classList.contains('translate-x-0');

      if (isOpen) {
        panel.classList.remove('translate-x-0');
        panel.classList.add('translate-x-full');
        backdrop.classList.add('opacity-0');
        setTimeout(() => backdrop.classList.add('pointer-events-none'), 300);
      } else {
        backdrop.classList.remove('pointer-events-none', 'opacity-0');
        panel.classList.remove('translate-x-full');
        panel.classList.add('translate-x-0');
      }
    }

    // Toast Notification System
    function showToast(message) {
      const toast = document.getElementById('toast');
      document.getElementById('toastMsg').innerText = message;
      toast.classList.remove('opacity-0', 'pointer-events-none');
      toast.classList.add('opacity-100');
      setTimeout(() => {
        toast.classList.remove('opacity-100');
        toast.classList.add('opacity-0', 'pointer-events-none');
      }, 2500);
    }

    // Initial Render
    renderProducts(products);
  </script>
</body>
</html>